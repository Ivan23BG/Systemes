//
// Created by Ivan on 18/07/2023.
//


#include "impair.h"
#include "pair.h"


int impair(unsigned int i){
    if (i==0)
        return 0;
    else
        return pair(i-1);
}