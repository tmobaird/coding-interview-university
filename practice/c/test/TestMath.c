#include "unity.h"
#include "Math.h"
#include "Utils.h"

// sum()
void test_sum_should_ReturnFive(void) {
    TEST_ASSERT( sum(2,3) == 5 );
}

void test_sum_should_ReturnSix(void) {
    TEST_ASSERT_EQUAL(6, sum(4,2));
}

// factorial()
void test_factorial_should_ReturnTwo(void) {
    TEST_ASSERT_EQUAL(2, factorial(2));
}

void test_factorial_should_ReturnTwentyFour(void) {
    TEST_ASSERT_EQUAL(24, factorial(4));
}

// is_prime()
void test_is_prime_should_ReturnTrue(void) {
    TEST_ASSERT(is_prime(13) == true);
}

void test_is_prime_should_ReturnFalse(void) {
    TEST_ASSERT(is_prime(12) == false);
}

void test_is_prime_should_ReturnFalse_when_num_is_one(void) {
    TEST_ASSERT(is_prime(1) == false);
}

int main(void) {
    UNITY_BEGIN();

    // sum()
    RUN_TEST(test_sum_should_ReturnFive);
    RUN_TEST(test_sum_should_ReturnSix);
    // factorial()
    RUN_TEST(test_factorial_should_ReturnTwo);
    RUN_TEST(test_factorial_should_ReturnTwentyFour);
    // is_prime()
    RUN_TEST(test_is_prime_should_ReturnTrue);
    RUN_TEST(test_is_prime_should_ReturnFalse);
    RUN_TEST(test_is_prime_should_ReturnFalse_when_num_is_one);

    return UNITY_END();
}
