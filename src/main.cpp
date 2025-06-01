#include "hamburger_house.h"
#include "beef_hamburger_builder.h"
#include "pork_hamburger_builder.h"
#include <iostream>

int main() {
    HamburgerHouse macdoria(std::make_unique<BeefHamburgerBuilder>());

    std::cout << "======== Beef Based Hamburger House ========\n";
    std::cout << "* Let's make a cheese burger\n";
    macdoria.MakeCheeseBurger().Print();
    std::cout << "* Let's make a jumbo burger\n";
    macdoria.MakeJumboBurger().Print();

    macdoria.ChangeBuilder(std::make_unique<PorkHamburgerBuilder>());
    std::cout << "\n======== Pork Based Hamburger House ========\n";
    std::cout << "* Let's make a cheese burger\n";
    macdoria.MakeCheeseBurger().Print();
    std::cout << "* Let's make a jumbo burger\n";
    macdoria.MakeJumboBurger().Print();

    return 0;
}
