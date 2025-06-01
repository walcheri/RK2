#pragma once
#include "hamburger_ingredient.h"

struct Bread : public HamburgerIngredient {
    std::string Name() const override;
};

struct LightBread : public Bread {
    std::string Name() const override;
};

struct SaltyBread : public Bread {
    std::string Name() const override;
};
