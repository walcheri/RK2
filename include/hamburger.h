#pragma once
#include <memory>
#include <vector>
#include "ingredients/hamburger_ingredient.h"

class Hamburger {
public:
    explicit Hamburger(std::vector<std::unique_ptr<HamburgerIngredient>>&& ingredientList);
    void Print() const;
private:
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredientList_;
};
