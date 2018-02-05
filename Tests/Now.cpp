//
// Created by Jackson Zhang on 2018/02/05.
//

#include <iomanip>
#include <sstream>
#include "Now.h"
#include "SystemTimeProvider.h"

Now::Now(TimeProvider &timeProvider) : timeProvider(timeProvider) {}

std::string Now::getString() {
    std::stringstream ss;
    auto time = timeProvider.getTime();
    ss << std::put_time(localtime(&time), "%Y-%m-%d %H:%M:%S");
    return ss.str();
}


