#include "../include/pork_hamburger_builder.h"
#include "../include/ingredients/salty_bread.h"
#include "../include/ingredients/pork_patty.h"
#include "../include/ingredients/cheddar_cheese.h"
#include "../include/ingredients/tomato.h"
#include "../include/ingredients/lettuce.h"
#include "../include/ingredients/mustard_sauce.h"

void PorkHamburgerBuilder::Initialize() { ingredientList_.clear(); }
void PorkHamburgerBuilder::BuildBread() { ingredientList_.push_back(std::make_unique<SaltyBread>()); }
void PorkHamburgerBuilder::BuildPatty() { ingredientList_.push_back(std::make_unique<PorkPatty>()); }
void PorkHamburgerBuilder::BuildCheese() { ingredientList_.push_back(std::make_unique<CheddarCheese>()); }
void PorkHamburgerBuilder::BuildTomato() { ingredientList_.push_back(std::make_unique<Tomato>()); }
void PorkHamburgerBuilder::BuildLettuce() { ingredientList_.push_back(std::make_unique<Lettuce>()); }
void PorkHamburgerBuilder::BuildSauce() { ingredientList_.push_back(std::make_unique<MustardSauce>()); }

Hamburger PorkHamburgerBuilder::GetHamburger() {
    return Hamburger(std::move(ingredientList_));
}
