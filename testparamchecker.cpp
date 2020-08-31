#include "CNC_DiamentionMonitoring.hpp"
#include "CNC_DurationMonitoring.hpp"
#include "CNC_SelfTest.hpp"
#include "CNC_PartDiamentionVariationRead.hpp"
#include "CNC_ReadOperationDuration.hpp"
#include "CNC_TemperatureMonitoring.hpp"
#include "CNC_TemperatureRead.hpp"
#include "CNC_SupportingFile.hpp"

#include <gtest/gtest.h>


TEST(StatusCode, Empty) { 
    ASSERT_EQ(TRUE, TRUE);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
