//
// Created by Ivan on 14/07/2023.
//


/* The algorithm is :
 * initialise 5 float variables
 * read 5 float variables
 * sum them up and divide the result by 5
 * return the result */

#include <stdio.h>


int main(int argc, char **argv) {
    /* This program realises the mean of 5 input float numbers */

    float n1, n2, n3, n4, n5;
    printf("Input 5 float numbers:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    float s = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("The mean is %f\n", s);

    return 0;
}