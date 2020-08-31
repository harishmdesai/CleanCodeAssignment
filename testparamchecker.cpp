#include <gtest/gtest.h>
#include "CNC_DiamentionMonitoring.hpp"
#include "CNC_PartDiamentionVariationRead.hpp"
CNCPartDiamentionVariationValue = 0.01;


TEST(StatusCode, Empty) { 
    ASSERT_EQ( Fun_IsDiamentioninRange(), 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
