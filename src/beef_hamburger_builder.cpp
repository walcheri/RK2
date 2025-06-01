#include "../include/beef_hamburger_builder.h"
#include "../include/ingredients/light_bread.h"
#include "../include/ingredients/beef_patty.h"
#include "../include/ingredients/mozzarella_cheese.h"
#include "../include/ingredients/tomato.h"
#include "../include/ingredients/lettuce.h"
#include "../include/ingredients/garlic_sauce.h"

void BeefHamburgerBuilder::Initialize() { ingredientList_.clear(); }
void BeefHamburgerBuilder::BuildBread() { ingredientList_.push_back(std::make_unique<LightBread>()); }
void BeefHamburgerBuilder::BuildPatty() { ingredientList_.push_back(std::make_unique<BeefPatty>()); }
void BeefHamburgerBuilder::BuildCheese() { ingredientList_.push_back(std::make_unique<MozzarellaCheese>()); }
void BeefHamburgerBuilder::BuildTomato() { ingredientList_.push_back(std::make_unique<Tomato>()); }
void BeefHamburgerBuilder::BuildLettuce() { ingredientList_.push_back(std::make_unique<Lettuce>()); }
void BeefHamburgerBuilder::BuildSauce() { ingredientList_.push_back(std::make_unique<GarlicSauce>()); }

Hamburger BeefHamburgerBuilder::GetHamburger() {
    return Hamburger(std::move(ingredientList_));
}
