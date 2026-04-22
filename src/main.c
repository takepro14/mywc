#include <stdio.h>
#include <stdlib.h>

#include "mywc.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    return mywc(argv[1]);
}
