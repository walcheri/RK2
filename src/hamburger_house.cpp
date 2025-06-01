#include "../include/hamburger_house.h"

HamburgerHouse::HamburgerHouse(std::unique_ptr<HamburgerBuilder>&& builder)
    : builder_(std::move(builder)) {}

void HamburgerHouse::ChangeBuilder(std::unique_ptr<HamburgerBuilder>&& builder) {
    builder_ = std::move(builder);
}

Hamburger HamburgerHouse::MakeCheeseBurger() {
    builder_->Initialize();
    builder_->BuildBread();
    builder_->BuildLettuce();
    builder_->BuildSauce();
    builder_->BuildPatty();
    builder_->BuildCheese();
    builder_->BuildBread();
    return builder_->GetHamburger();
}

Hamburger HamburgerHouse::MakeJumboBurger() {
    builder_->Initialize();
    builder_->BuildBread();
    builder_->BuildLettuce();
    builder_->BuildSauce();
    builder_->BuildPatty();
    builder_->BuildCheese();
    builder_->BuildBread();
    builder_->BuildLettuce();
    builder_->BuildSauce();
    builder_->BuildPatty();
    builder_->BuildCheese();
    builder_->BuildBread();
    return builder_->GetHamburger();
}
