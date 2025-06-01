#pragma once
#include "hamburger_ingredient.h"

struct Bread : public HamburgerIngredient {
    std::string Name() const override { return "Bread"; }
};

struct LightBread : public Bread {
    std::string Name() const override { return "LightBread"; }
};

struct SaltyBread : public Bread {
    std::string Name() const override { return "SaltyBread"; }
};
