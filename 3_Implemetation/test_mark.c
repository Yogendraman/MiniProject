#include "unity.h"
#include "fun.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "CGPA Provider"

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_marks(void)
{
  TEST_ASSERT_EQUAL(1.00, marks(10));
  TEST_ASSERT_EQUAL(9.47, marks(90));
}

void test_attend(void)
{
  // TEST_ASSERT_EQUAL("Excellent Attendance\n", attend(95));
  TEST_ASSERT_EQUAL("Please enter attendance\n", attend(110));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_marks);
  // RUN_TEST(test_attend);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}