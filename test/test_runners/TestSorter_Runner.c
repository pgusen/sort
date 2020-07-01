/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  UNITY_EXEC_TIME_START(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UNITY_EXEC_TIME_STOP(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#define UNITY_INCLUDE_SETUP_STUBS
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "../../sort.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_quick();
extern void test_insertion();
extern void test_selection();
extern void test_shell();
extern void test_heap();
extern void test_merge();


/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test/test_sorter.c");
  RUN_TEST(test_quick, 14);
  RUN_TEST(test_insertion, 21);
  RUN_TEST(test_selection, 28);
  RUN_TEST(test_shell, 35);
  RUN_TEST(test_heap, 42);
  RUN_TEST(test_merge, 49);

  return suite_teardown(UnityEnd());
}
