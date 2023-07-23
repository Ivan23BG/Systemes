//
// Created by Ivan on 14/07/2023.
//


/* The algorithm is :
 * initialise a temporary table and a result table
 * until you reach the separator, add characters to tmp table
 * add tmp table to final once reaching separator, use index
 * repeat until end of string
 * add last tmp table
 * return result table */


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char **strsplit(const char *, char);

int main(int argc, char** argv) {
    if (argc == 1) { // no given argument
        strsplit("/bin:/usr/bin:/usr/local/bin",':');
    } else {
        strsplit(argv[1], argv[2][0]);
    }
}

char **strsplit(const char *s, const char sep) {
    // Declare variables
    int shift;
    int res_index;
    char *tmp_char;
    char **result;
    int s_length;

    // Initialise variables
    shift = 0;
    res_index = 0;
    s_length = strlen(s);
    tmp_char = (char *) malloc(sizeof(char) * (s_length + 1));
    memset(tmp_char, '\0', strlen(tmp_char));
    result = (char **) malloc(sizeof(char *) * s_length * (s_length + 6));
    for (int i = 0; i < s_length; i++) {
        result[i] = (char *) malloc(sizeof(char) * (s_length + 6));
    }

    // Start dissecting string

    for (int i = 0; i < s_length; i ++) { // find all char* that precede a sep
        if (s[i] == sep) { // if we find separator
            tmp_char[i - shift] = '\0';
            shift = i + 1; // update shift
            result[res_index] = (char *) malloc(sizeof(char) * (strlen(tmp_char) + 6));
            sprintf(result[res_index], "%d --> %s", res_index, tmp_char); // update result
            res_index++; // update res_index
            memset(tmp_char, '\0', strlen(tmp_char)); // reset tmp_char
        } else {
            tmp_char[i - shift] = s[i];
        }
        // printf("Current state of tmp char : %s \t \t added\t%c\n", tmp_char, s[i]);
    }

    // add last char*
    sprintf(result[res_index], "%d --> %s", res_index, tmp_char);

    // print result
    for (int i = 0; i < res_index + 1; i++) {
        for (int j = 0; j < strlen(result[i]); j++) {
            printf("%c",result[i][j]);
        }
        printf("\n");
    }

    return result;
}