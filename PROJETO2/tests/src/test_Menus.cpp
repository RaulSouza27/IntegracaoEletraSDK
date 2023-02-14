#include "Menus.h"
#include "catch.hpp"

TEST_CASE("Test Menus::get_seletor - Case Zeus")
{
    int n = 1;
    Menus my_menu;

    REQUIRE(my_menu.get_seletor(n) == Seletor::ZEUS);
}