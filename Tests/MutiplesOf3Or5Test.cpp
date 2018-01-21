//
// Created by Jackson Zhang on 2018/01/21.
//

#include <gtest/gtest.h>
#include "Multiples.h"

class MultiplesTest: public testing::Test {
public:
    Multiples multiples;
};

TEST_F(MultiplesTest, sum_of_multiples_below_1_is_0){
    ASSERT_EQ(0, multiples.sum_below(1));
}

TEST_F(MultiplesTest, sum_of_multiples_below_4_is_3) {
    ASSERT_EQ(3, multiples.sum_below(4));
}

TEST_F(MultiplesTest, sum_of_multiples_below_6_is_8) {
    ASSERT_EQ(8, multiples.sum_below(6));
}

TEST_F(MultiplesTest, sum_of_multiples_below_7_is_14) {
    ASSERT_EQ(14, multiples.sum_below(7));
}

TEST_F(MultiplesTest, sum_of_multiples_below_11_is_33) {
    ASSERT_EQ(33, multiples.sum_below(11));
}
