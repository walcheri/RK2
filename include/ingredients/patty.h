#pragma once
#include "hamburger_ingredient.h"

struct Patty : public HamburgerIngredient {
    std::string Name() const override { return "Patty"; }
};

struct BeefPatty : public Patty {
    std::string Name() const override { return "BeefPatty"; }
};

struct PorkPatty : public Patty {
    std::string Name() const override { return "PorkPatty"; }
};
