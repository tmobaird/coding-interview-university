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

void test_reverse_should_Return_0(void) {
    TEST_ASSERT(reverse(0) == 0);
}

void test_reverse_should_Return_1(void) {
    TEST_ASSERT(reverse(1) == 1);
}

void test_reverse_should_Return_321(void) {
    TEST_ASSERT(reverse(321) == 123);
}

void test_is_palindrome_should_Return_true(void) {
    TEST_ASSERT(is_palindrome(12321) == true);
}

void test_is_palindrome_should_Return_false(void) {
    TEST_ASSERT(is_palindrome(12345) == false);
}

void test_fibonacci_should_Return_neg_1(void) {
    TEST_ASSERT(fibonacci(0) == -1);
}

void test_fibonacci_should_Return_1(void) {
    TEST_ASSERT(fibonacci(1) == 1);
    TEST_ASSERT(fibonacci(2) == 1);
}

void test_fibonacci_should_Return_2(void) {
    TEST_ASSERT(fibonacci(3) == 2);
}

void test_fibonacci_should_Return_13(void) {
    TEST_ASSERT(fibonacci(7) == 13);
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
    // reverse()
    RUN_TEST(test_reverse_should_Return_1);
    RUN_TEST(test_reverse_should_Return_321);
    RUN_TEST(test_reverse_should_Return_0);
    // is_palindrome()
    RUN_TEST(test_is_palindrome_should_Return_true);
    RUN_TEST(test_is_palindrome_should_Return_false);
    // fibonacci()
    RUN_TEST(test_fibonacci_should_Return_neg_1);
    RUN_TEST(test_fibonacci_should_Return_1);
    RUN_TEST(test_fibonacci_should_Return_2);
    RUN_TEST(test_fibonacci_should_Return_13);
    
    return UNITY_END();
}
