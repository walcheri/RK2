#pragma once
#include "hamburger_ingredient.h"

struct Lettuce : public HamburgerIngredient {
    std::string Name() const override {return "Lettuce";};
};
