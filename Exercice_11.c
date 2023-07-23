//
// Created by Ivan on 15/07/2023.
//


/* algorithm:
 * create result same size as num length
 * print num as char in result
 * return result */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int get_digit(int, int);
char *ex11_01(int);
char *ex11_02(int);
char int_to_char(int);
int num_length(int);


int main(int argc, char **argv) {
    // variable declaration
    int number;
    char *result;

    // variable initialisation
    if (argc > 1) {
        number = atoi(argv[1]);
    } else {
        number = 1232321;
    }

    // result = ex11_01(number);
    result = ex11_02(number);

    printf("number is: %s\n", result);
    return 0;
}


char *ex11_01(int n) {
    char *result;
    result = (char *) malloc(sizeof(char) * num_length(n));;
    sprintf(result, "%d", n);
    return result;
}


int num_length(int n) {
    int count = 0;
    do {
        n = n / 10;
        count++;
    } while (n != 0);
    return count;
}


char *ex11_02(int n) {
    int count, cpy;
    cpy = n;
    count = 0;
    char *res;


    count = num_length(n);
    res = (char *) malloc(sizeof(char) * count + 1);

    for (int i = 0; i < count; i++) {
        res[i] = int_to_char(get_digit(n, i));
    }
    res[count] = '\0';
    return res;
}


int get_digit(int num, int n) {
    /**
     * @brief Returns the n-th digit of a number num
     * @param num number that you want the function to work on
     * @param n the digit you want to retrieve
     * @return the n-th digit of a number num
     */
    int r;
    r = num / pow(10, n);
    r = r % 10;
    return r;
}


char int_to_char(int n) {
    switch (n) {
        case 0:
            return '0';

        case 1:
            return '1';

        case 2:
            return '2';

        case 3:
            return '3';

        case 4:
            return '4';

        case 5:
            return '5';

        case 6:
            return '6';

        case 7:
            return '7';

        case 8:
            return '8';

        case 9:
            return '9';

        default:
            return '\0';
    }
}