#include "unity.h"

#include "header.h"

void test_car(void);
void test_scooter(void);

void setUp()
{
}
void tearDown()
{
}

void test_car(void)
{
    TEST_ASSERT_EQUAL_STRING();
    TEST_ASSERT_EQUAL_STRING();
    
}
void test_scooter(void)
{
    
    TEST_ASSERT_EQUAL();
    TEST_ASSERT_EQUAL();
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_login);
  RUN_TEST(test_change_prize);
  return UNITY_END();
}
