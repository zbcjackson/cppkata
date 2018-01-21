//
// Created by Jackson Zhang on 2018/01/21.
//

#include "Multiples.h"

int Multiples::sum_below(int number) {
    int sum = 0;
    for (int i = 1; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}
