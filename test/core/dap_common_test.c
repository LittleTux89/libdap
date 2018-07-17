#include "dap_common_test.h"

static const int INT_VAL = 10;
static const char * CORRECT_VALUE = "10";

void test_put_int() {
    char * result_arr = itoa(INT_VAL);
    assert(strcmp(result_arr, CORRECT_VALUE) == 0 && "test_put_int failed");
}

void dap_common_test_run() {
    printf("Start running dap_common_test\n");
    test_put_int();
}
