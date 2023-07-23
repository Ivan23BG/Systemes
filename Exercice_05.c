//
// Created by Ivan on 14/07/2023.
//


#include <stdio.h>


int main(int argc, char **argv, char**env) {
    /* This program outputs :
     * 1- the number of parameters given in the command line
     * 2- said parameters,
     * 3- environment variables */

    printf("The number of parameters is %d\n\n", argc); // 1

    for (int i = 0; i < argc; i++) {
        printf("Argument number %d is : \t%s\n", i+1, argv[i]);
    } // 2

    printf("\nThe environment variables are:\n");
    for (int i = 0; i < sizeof(env); i++) {
        printf("%s\n",env[i]);
    } // 3

    return 0;
}