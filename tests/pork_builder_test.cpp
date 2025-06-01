#include "../include/pork_hamburger_builder.h"
#include <gtest/gtest.h>

TEST(PorkBuilderTest, CreateCheeseBurger) {
    PorkHamburgerBuilder builder;
    builder.Initialize();
    builder.BuildBread();
    builder.BuildPatty();
    auto burger = builder.GetHamburger();
    
    testing::internal::CaptureStdout();
    burger.Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(output.find("SaltyBread") != std::string::npos);
    EXPECT_TRUE(output.find("PorkPatty") != std::string::npos);
}
