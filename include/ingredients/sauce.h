#pragma once
#include "hamburger_ingredient.h"

struct Sauce : public HamburgerIngredient {
    std::string Name() const override;
};

struct GarlicSauce : public Sauce {
    std::string Name() const override;
};

struct MustardSauce : public Sauce {
    std::string Name() const override;
};
