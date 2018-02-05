//
// Created by Jackson Zhang on 2018/02/05.
//

#ifndef CPPKATA_SYSTEMTIMEPROVIDER_H
#define CPPKATA_SYSTEMTIMEPROVIDER_H


#include "TimeProvider.h"

class SystemTimeProvider: public TimeProvider {
public:
    time_t getTime() const override;
};


#endif //CPPKATA_SYSTEMTIMEPROVIDER_H
