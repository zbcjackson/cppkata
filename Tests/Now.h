//
// Created by Jackson Zhang on 2018/02/05.
//

#ifndef CPPKATA_NOW_H
#define CPPKATA_NOW_H


#include <string>
#include "TimeProvider.h"

class Now {
    TimeProvider& timeProvider;
public:
    Now(TimeProvider &timeProvider);

    std::string getString();
};


#endif //CPPKATA_NOW_H
