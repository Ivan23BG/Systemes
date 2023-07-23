//
// Created by Ivan on 15/07/2023.
//


// convert a string of digits into an int


/* algorithm :
 * 1 digit at a time, go from char to int,
 * add the powers of 10
 * return the sum of the numbers*/


#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int pow1(int, int);
int ctoi(char);


int main(int argc, char **argv) {
    // variable declaration
    int n;
    char *string;
    int *digits;
    int sum;

    // variable initialisation
    sum = 0;
    if (argc != 1) {
        string = (char *) malloc(sizeof(char) * strlen(argv[1]));
        strcpy(string, argv[1]);
    } else {
        string = (char *) malloc(sizeof(char) * 8);
        strcpy(string, "1232321");
    }
    n = strlen(string);

    digits = (int *) malloc(sizeof(int) * n);

    // string conversion

    for (int i = 0; i < n; i++) {
        digits[n-i-1] = ctoi(string[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += digits[i] * pow1(10, i);
    }

    printf("Number is %d\n", sum);
    return sum;
}


int pow1(int x, int y) {
    if (y == 0) {
        return 1;
    }
    int s = 1;
    for (int i = 0; i < y; i++) {
        s = s * x;
    }
    return s;
}


int ctoi(const char c) {
    switch (c) {
        case '0':
            return 0;

        case '1':
            return 1;

        case '2':
            return 2;

        case '3':
            return 3;

        case '4':
            return 4;

        case '5':
            return 5;

        case '6':
            return 6;

        case '7':
            return 7;

        case '8':
            return 8;

        case '9':
            return 9;

        default:
            return -1;
    }
}