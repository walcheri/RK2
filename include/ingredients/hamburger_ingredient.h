#pragma once
#include <string>

struct HamburgerIngredient {
    virtual ~HamburgerIngredient() = default;
    virtual std::string Name() const = 0;
};
