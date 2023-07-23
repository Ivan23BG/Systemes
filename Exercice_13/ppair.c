//
// Created by Ivan on 22/07/2023.
//


#include <stdlib.h>
#include <stdio.h>


int pair(unsigned int);
int impair(unsigned int);


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


int pair(unsigned const int i){
    if (i==0)
        return 1;
    else
        return impair(i-1);
}


int impair(unsigned const int i){
    if (i==0)
        return 0;
    else
        return pair(i-1);
}



