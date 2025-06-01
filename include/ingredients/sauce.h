#pragma once
#include "hamburger_ingredient.h"

struct Sauce : public HamburgerIngredient {
    std::string Name() const override { return "Sauce" };
};

struct GarlicSauce : public Sauce {
    std::string Name() const override { return "GarlicSauce" };
};

struct MustardSauce : public Sauce {
    std::string Name() const override { return "MustardSauce" };
};
