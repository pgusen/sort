//Include the test framework
#include "../tools/Unity/src/unity.h"

//Include the header file with the declarations of the functions

#include "../sort.h"

void setUp (void) {

} /* Is run before every test, put unit init calls here. */
void tearDown (void) {
    
} /* Is run after every test, put unit clean-up calls here. */

void test_quick() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, QUICK), 4);
}

void test_insertion() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, INSERTION), 4);
}

void test_selection() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, SELECTION), 4);
}

void test_shell() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, SHELL), 4);
}

void test_heap() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, HEAP), 4);
}

void test_merge() {
    int array_imput[4] = {1, 3, 2, 4};
    int array_compare[4] = {1, 2, 3, 4};

    TEST_ASSERT_EQUAL_INT_ARRAY(array_compare, sort_array((int *)array_imput, 4, MERGE), 4);
}