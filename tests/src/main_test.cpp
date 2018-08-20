#include <gmock/gmock.h>

#include <myproject/main.h>

class MainTest: public testing::Test
{
};

TEST_F(MainTest, CheckSomeResults)
{
    EXPECT_EQ(5, getValue());
}