#include <stdio.h>

#include "util.h"
#include "writer.h"

int main(int argc, char *argv[]) {

    char *ProgramName = argv[0];

    if (argc != 2) {
        printf("usage: %s <dest file>\n", ProgramName);
        return 1;
    }

    char *destLocation = argv[1];
    char LargeBuffer[4096] = "";

    NewLine(5);

    FILE *destFile = fopen(destLocation, "w");

    if (destFile == NULL) {
        printf("failed to open file...\n");
        return 2;
    }

    printf("======= bfwriter =======\n");
    printf("enter a string of text\n\n");

    if (fgets(LargeBuffer, sizeof(LargeBuffer), stdin) == NULL) {
        printf("nothing to read...\n");
        fclose(destFile);
        return 3;
    }

    int written = WriteBrainfuck(destFile, LargeBuffer);

    if (written < 0 || fclose(destFile) != 0) {
        printf("failed to write file...\n");
        return 4;
    }

    printf("\nwrote %d chars of brainfuck to %s\n", written, destLocation);
    return 0;
}
