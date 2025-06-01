#pragma once
#include <memory>
#include "hamburger_builder.h"
#include "hamburger.h"

class HamburgerHouse {
public:
    explicit HamburgerHouse(std::unique_ptr<HamburgerBuilder>&& builder);
    void ChangeBuilder(std::unique_ptr<HamburgerBuilder>&& builder);
    Hamburger MakeCheeseBurger();
    Hamburger MakeJumboBurger();
private:
    std::unique_ptr<HamburgerBuilder> builder_;
};
