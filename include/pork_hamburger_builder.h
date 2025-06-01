#pragma once
#include "hamburger_builder.h"

class PorkHamburgerBuilder : public HamburgerBuilder {
public:
    void Initialize() override;
    void BuildBread() override;
    void BuildPatty() override;
    void BuildCheese() override;
    void BuildTomato() override;
    void BuildLettuce() override;
    void BuildSauce() override;
    Hamburger GetHamburger() override;
private:
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredientList_;
};
