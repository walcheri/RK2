#pragma once
#include "hamburger_ingredient.h"

struct Cheese : public HamburgerIngredient {
    std::string Name() const override { return "Cheese" };
};

struct MozzarellaCheese : public Cheese {
    std::string Name() const override { return "MozzarellaCheese" };
};

struct CheddarCheese : public Cheese {
    std::string Name() const override { return "CheddarCheese" };
};
