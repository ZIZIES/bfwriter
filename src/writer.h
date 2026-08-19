#ifndef WRITER_H
#define WRITER_H

#include <stdio.h>

/* translates every char in buffer into brainfuck that prints it, and writes
   that program to dest -- one source char per output line, with the char
   itself (or its ascii value) as a trailing comment.

   a CR sitting right before a LF is skipped so windows input doesn't emit a
   stray carriage return.

   returns the number of chars translated, or -1 if dest/buffer is NULL or a
   write failed. */
int WriteBrainfuck(FILE *dest, const char *buffer);

#endif /* WRITER_H */
