#pragma once
#include <memory>
#include "hamburger.h"

class HamburgerBuilder {
public:
    virtual ~HamburgerBuilder() = default;
    virtual void Initialize() = 0;
    virtual void BuildBread() = 0;
    virtual void BuildPatty() = 0;
    virtual void BuildCheese() = 0;
    virtual void BuildTomato() = 0;
    virtual void BuildLettuce() = 0;
    virtual void BuildSauce() = 0;
    virtual Hamburger GetHamburger() = 0;
};
