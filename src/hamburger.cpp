#include "../include/hamburger.h"
#include <iostream>

Hamburger::Hamburger(std::vector<std::unique_ptr<HamburgerIngredient>>&& ingredientList)
    : ingredientList_(std::move(ingredientList)) {}

void Hamburger::Print() const {
    std::cout << "----------\n";
    for (auto const& ingredient : ingredientList_)
        std::cout << ingredient->Name() << "\n";
    std::cout << "----------\n";
}
