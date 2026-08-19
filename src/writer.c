#include <stdio.h>

#include "writer.h"
#include "ascii.h"

/* cell 0 holds the byte we print, cell 1 is scratch for the multiply loop.
   scratch always ends the loop at zero, so cell 1 is 0 every time we start. */

#define MAX_COUNTER 32   /* past this the counter costs more than it saves */
#define LOOP_OVERHEAD 7  /* the > [ < > - ] < scaffolding */

static void EmitRepeat(FILE *dest, char symbol, int count) {
    int i;
    for (i = 0; i < count; i++) {
        fputc(symbol, dest);
    }
}

/* picks counter/step so counter*step + remainder == amount using as few
   symbols as possible. leaves counter at 0 when plain +/- is already cheaper. */
static void BestFactors(int amount, int *counter, int *step) {
    int bestCost = amount;  /* cost of just hammering the symbol */
    int a;

    *counter = 0;
    *step = 0;

    for (a = 2; a <= MAX_COUNTER; a++) {
        int b = amount / a;
        int r = amount % a;
        int cost = a + b + r + LOOP_OVERHEAD;

        if (b < 2) {
            break;  /* b only shrinks from here, so nothing left to win */
        }
        if (cost < bestCost) {
            bestCost = cost;
            *counter = a;
            *step = b;
        }
    }
}

/* walks cell 0 from its current value to the next one */
static void EmitDelta(FILE *dest, int delta) {
    char symbol = (delta >= 0) ? '+' : '-';
    int amount = (delta >= 0) ? delta : -delta;
    int counter;
    int step;

    if (amount == 0) {
        return;
    }

    BestFactors(amount, &counter, &step);

    if (counter == 0) {
        EmitRepeat(dest, symbol, amount);
        return;
    }

    fputc('>', dest);
    EmitRepeat(dest, '+', counter);
    fputc('[', dest);
    fputc('<', dest);
    EmitRepeat(dest, symbol, step);
    fputs(">-]<", dest);
    EmitRepeat(dest, symbol, amount - (counter * step));
}

static int IsCommand(int value) {
    return value == ASCII_PLUS     || value == ASCII_MINUS ||
           value == ASCII_LT       || value == ASCII_GT    ||
           value == ASCII_LBRACKET || value == ASCII_RBRACKET ||
           value == ASCII_PERIOD   || value == ASCII_COMMA;
}

static int IsPrintable(int value) {
    return value >= ASCII_SPACE && value < ASCII_DEL;
}

/* brainfuck ignores everything that isn't a command, so anything we write
   here is a comment -- as long as it isn't a command itself. */
static void EmitComment(FILE *dest, int value) {
    if (IsPrintable(value) && !IsCommand(value)) {
        fprintf(dest, "   %c = %d\n", (char)value, value);
    } else {
        fprintf(dest, "   chr %d\n", value);
    }
}

int WriteBrainfuck(FILE *dest, const char *buffer) {
    int current = 0;
    int written = 0;
    size_t i;

    if (dest == NULL || buffer == NULL) {
        return -1;
    }

    for (i = 0; buffer[i] != ASCII_NUL; i++) {
        int target = (unsigned char)buffer[i];

        if (target == ASCII_CR && buffer[i + 1] == ASCII_LF) {
            continue;
        }

        EmitDelta(dest, target - current);
        fputc('.', dest);
        EmitComment(dest, target);

        current = target;
        written++;
    }

    if (ferror(dest)) {
        return -1;
    }
    return written;
}
