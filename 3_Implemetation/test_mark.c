#include "unity.h"
#include "fun.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "CGPA Provider"

/* Prototypes for all the test functions */
void test_marks(void);
void test_attend(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_marks);
  RUN_TEST(test_attend);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_marks(void) {
  TEST_ASSERT_EQUAL(1.00, marks(10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("Invalid marks", marks(101));
}

void test_attend(void) {
  TEST_ASSERT_EQUAL("Excellent Attendance.", attend(90));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("Please enter valid attendance.", attend(101));
}
