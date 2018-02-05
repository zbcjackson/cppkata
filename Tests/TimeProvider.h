//
// Created by Jackson Zhang on 2018/02/05.
//

#ifndef CPPKATA_TIMEPROVIDER_H
#define CPPKATA_TIMEPROVIDER_H


#include <ctime>

class TimeProvider {
public:
    virtual time_t getTime() const = 0;
};


#endif //CPPKATA_TIMEPROVIDER_H
