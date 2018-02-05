//
// Created by Jackson Zhang on 2018/01/18.
//

#include "Prime.h"

std::vector<int> Prime::factors(int number) const {
    std::vector<int> factors;
    for(int candidate = 2; number > 1; candidate++){
        for (;number % candidate == 0; number /= candidate) {
            factors.push_back(candidate);
        }
    }
    return factors;
}
