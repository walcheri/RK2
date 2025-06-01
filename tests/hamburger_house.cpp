#include "../include/hamburger_house.h"
#include "../include/beef_hamburger_builder.h"
#include <gtest/gtest.h>

TEST(HamburgerHouseTest, MakeCheeseBurger) {
    HamburgerHouse house(std::make_unique<BeefHamburgerBuilder>());
    auto burger = house.MakeCheeseBurger();
    
    testing::internal::CaptureStdout();
    burger.Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(output.find("LightBread") != std::string::npos);
    EXPECT_TRUE(output.find("BeefPatty") != std::string::npos);
}
