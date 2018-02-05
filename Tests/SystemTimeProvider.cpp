//
// Created by Jackson Zhang on 2018/02/05.
//

#include "SystemTimeProvider.h"

time_t SystemTimeProvider::getTime() const {
    return time(nullptr);
}
