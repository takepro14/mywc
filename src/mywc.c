#include "mywc.h"

#include <ctype.h>
#include <stdio.h>

int mywc(const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    int c;
    int in_word = 0;
    unsigned long lines = 0;
    unsigned long words = 0;
    unsigned long bytes = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        bytes++;

        if (c == '\n')
        {
            lines++;
        }

        if (isspace((unsigned char)c))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            words++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("%8lu %7lu %7lu %s\n", lines, words, bytes, filename);
    return 0;
}
