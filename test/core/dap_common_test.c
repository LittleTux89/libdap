#include "dap_common_test.h"

static const int INT_VAL = -1;
static const double DOUBLE_VAL = 999;

void test_put_int() {
        char * result_arr = itoa(INT_VAL);
        printf("Result integer: %s \n", result_arr);
}

void test_put_double() {
	assert(DOUBLE_VAL < INT_MAX);
        char * result_arr = itoa(DOUBLE_VAL);
        printf("Result double: %s \n", result_arr);
}

void dap_common_test_run() {
    printf("Start running dap_common_test\n");
    test_put_int();
    test_put_double();
}
