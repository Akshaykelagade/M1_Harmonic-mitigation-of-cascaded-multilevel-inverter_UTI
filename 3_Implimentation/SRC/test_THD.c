#include "THD.h"
#include "unity.h"
void setup(){

}
void teardown(){

}
void test_determinant(void){
    TEST_ASSERT_EQUAL_FLOAT(125.0000,determinant(2,3));
}
it main(void){
    UNITY_BEGIN();

    RUN_TEST(test_determinant);

    return UNITY_END();
}
