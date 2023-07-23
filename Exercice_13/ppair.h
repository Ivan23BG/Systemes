//
// Created by Ivan on 22/07/2023.
//


#ifndef SYSTEMES_PPAIR_H
#define SYSTEMES_PPAIR_H


#include <stdlib.h>
#include <stdio.h>


int pair(unsigned int);
/**
 * @brief returns 1 if @param i is even
 * This function recursively calls the impair function
 * @param i int whose parity is unknown
 * @return 1 or 0 if @param i is even or odd
 */


int impair(unsigned int);
/**
 * @brief returns 0 if @param i is odd
 * This function recursively calls the pair function
 * @param i int whose parity is unknown
 * @return 1 or 0 if @param i is even or odd
 */

#endif //SYSTEMES_PPAIR_H
