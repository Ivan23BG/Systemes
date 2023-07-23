//
// Created by Ivan on 14/07/2023.
//


/* The algorithm is
 * Set a float variable
 * add all the variables to it
 * divide the result by the number of variables */


#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv) {
    // return the mean of a series of numbers given in the command line

    float s = 0;
    for (int i = 1; i < argc; i++) {
        s += atoi(argv[i]);
    }
    s = s / (argc - 1);
    printf("The mean is : %d",s);

    return 0;
}