#pragma once
#include "hamburger_ingredient.h"

struct Tomato : public HamburgerIngredient {
    std::string Name() const override { return "Tomato"; };
};
