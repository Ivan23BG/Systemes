//
// Created by Ivan on 18/07/2023.
//


#include <stdio.h>
#include <stdlib.h>
#include "pair.h"
#include "impair.h"

int main(int argc, char **argv) {
    // variable declaration
    int n;

    // variable initialisation
    n = atoi(argv[1]);

    if (pair(n)) {
        printf("%d est pair !\n", n);
    } else {
        printf("%d est impair !\n", n);
    }
}