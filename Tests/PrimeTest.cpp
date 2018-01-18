//
// Created by Jackson Zhang on 2018/01/18.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <gmock/gmock-generated-matchers.h>
#include "Prime.h"

class PrimeTest: public testing::Test {
public:
    Prime prime;
};

TEST_F(PrimeTest, OneHasNoPrimeFactor){
    ASSERT_THAT(prime.factors(1), testing::ElementsAre());
}

TEST_F(PrimeTest, PrimeFactorsOfTwoIsTwo){
    ASSERT_THAT(prime.factors(2), testing::ElementsAre(2));
}

TEST_F(PrimeTest, PrimeFactorsOfThreeIsThree) {
    ASSERT_THAT(prime.factors(3), testing::ElementsAre(3));
}


TEST_F(PrimeTest, PrimeFactorsOfFourAre2And2) {
    ASSERT_THAT(prime.factors(4), testing::ElementsAre(2, 2));
}

TEST_F(PrimeTest, PrimeFactorsOfSixAre2And3) {
    ASSERT_THAT(prime.factors(6), testing::ElementsAre(2, 3));
}

TEST_F(PrimeTest, PrimeFactorsOfEightAre2And2And2) {
    ASSERT_THAT(prime.factors(8), testing::ElementsAre(2, 2, 2));
}

TEST_F(PrimeTest, Prime_Factors_of_9_are_3_and_3) {
    ASSERT_THAT(prime.factors(9), testing::ElementsAre(3, 3));
}
