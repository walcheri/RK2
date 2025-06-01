#pragma once
#include "hamburger_ingredient.h"

struct Patty : public HamburgerIngredient {
    std::string Name() const override;
};

struct BeefPatty : public Patty {
    std::string Name() const override;
};

struct PorkPatty : public Patty {
    std::string Name() const override;
};
