#pragma once
#include "hamburger_ingredient.h"

struct Cheese : public HamburgerIngredient {
    std::string Name() const override;
};

struct MozzarellaCheese : public Cheese {
    std::string Name() const override;
};

struct CheddarCheese : public Cheese {
    std::string Name() const override;
};
