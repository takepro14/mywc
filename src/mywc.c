#include "mywc.h"
#include <stdio.h>

void mywc(const char *filename) {
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Failed to open file");
    return;
  }

  int c;
  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
  }

  fclose(fp);
}
