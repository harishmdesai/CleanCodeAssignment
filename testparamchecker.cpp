#include <gtest/gtest.h>
#include "CNC_DiamentionMonitoring.hpp"
#include "CNC_PartDiamentionVariationRead.hpp"
float T_CNCPartDiamentionVariationValue = 0.01;


TEST(StatusCode, Empty) { 
    ASSERT_EQ( (void)FUN_ADCRead_DiamentionVariation(T_CNCPartDiamentionVariationValue), 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
