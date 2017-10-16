#include "unity.h"
#include "BitOps.h"
#include "Utils.h"

// left_shift()
void test_left_shift_should_equal_2(void) {
    TEST_ASSERT_EQUAL(2, left_shift(1, 1));
}

void test_left_shift_should_equal_40(void) {
    TEST_ASSERT_EQUAL(40, left_shift(10, 2));
}

// right_shift()
void test_right_shift_should_equal_0(void) {
    TEST_ASSERT_EQUAL(0, right_shift(1, 1));
}

void test_right_shift_should_equal_1(void) {
    TEST_ASSERT_EQUAL(1, right_shift(2, 1));
}

void test_right_shift_should_equal_2(void) {
    TEST_ASSERT_EQUAL(2, right_shift(10, 2));
}

int main(void) {
    UNITY_BEGIN();

    // left_shift()
    RUN_TEST(test_left_shift_should_equal_2);
    RUN_TEST(test_left_shift_should_equal_40);
    // right_shift()
    RUN_TEST(test_right_shift_should_equal_0);
    RUN_TEST(test_right_shift_should_equal_1);
    RUN_TEST(test_right_shift_should_equal_2);

    return UNITY_END();
}
