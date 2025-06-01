#include "../include/beef_hamburger_builder.h"
#include <gtest/gtest.h>

TEST(BeefBuilderTest, CreateCheeseBurger) {
    BeefHamburgerBuilder builder;
    builder.Initialize();
    builder.BuildBread();
    builder.BuildPatty();
    auto burger = builder.GetHamburger();
    
    testing::internal::CaptureStdout();
    burger.Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(output.find("LightBread") != std::string::npos);
    EXPECT_TRUE(output.find("BeefPatty") != std::string::npos);
}
