#include <gtest/gtest.h>


TEST(StatusCode, Empty) { 
    ASSERT_EQ(TRUE, TRUE);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
