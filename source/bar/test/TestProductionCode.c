//#include "ProductionCode.h"
#include "unity.h"
#include "unity_fixture.h"
#include "bar.h"


TEST_GROUP(barTestFunction);





TEST_SETUP(barTestFunction)
{
  //This is run before EACH TEST
}

TEST_TEAR_DOWN(barTestFunction)
{
}



TEST(barTestFunction, Test_bar_add)
{
  // You should see this line fail in your test summary
  TEST_ASSERT_EQUAL(7, bar_add(3,5));

}


