#include "../include/hamburger.h"
#include "../include/ingredients/light_bread.h"
#include "../include/ingredients/beef_patty.h"
#include <gtest/gtest.h>
#include <vector>

TEST(HamburgerTest, PrintOutput) {
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredients;
    ingredients.push_back(std::make_unique<LightBread>());
    ingredients.push_back(std::make_unique<BeefPatty>());
    
    Hamburger burger(std::move(ingredients));
    
    testing::internal::CaptureStdout();
    burger.Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(output.find("LightBread") != std::string::npos);
    EXPECT_TRUE(output.find("BeefPatty") != std::string::npos);
}
