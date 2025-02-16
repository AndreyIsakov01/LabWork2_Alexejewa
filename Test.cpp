//Алексеева Ульяна st129990@student.spbu.ru
#include <gtest/gtest.h>
#include "test_example.h"

TEST(test_example, add)
{
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(1, 2), 0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
