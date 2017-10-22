#include "unity.h"
#include "Array.h"
#include "Utils.h"

// Dumb test
void test_true_should_eq_true(void) {
    TEST_ASSERT(true == true);
}


int main(void) {
    UNITY_BEGIN();

    // dumb test
    RUN_TEST(test_true_should_eq_true);

    return UNITY_END();
}
