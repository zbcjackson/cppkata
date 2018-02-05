//
// Created by Jackson Zhang on 2018/02/05.
//

#include <gtest/gtest.h>
#include "Now.h"

class TimeProviderStub: public TimeProvider{
    time_t getTime() const override {
        tm time;
        time.tm_year= 118;
        time.tm_mon = 1;
        time.tm_mday = 5;
        time.tm_hour = 17;
        time.tm_min = 12;
        time.tm_sec = 35;
        return mktime(&time);
    }
};
class NowTest: public testing::Test {
public:
    TimeProviderStub timeProvider;
    Now now = Now(timeProvider);
};

TEST_F(NowTest, get_now_string){
    ASSERT_EQ("2018-02-05 17:12:35", now.getString());
}
