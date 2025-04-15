#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "../include/myheader.h"

TEST_CASE("Addition works correctly") {
    CHECK(add(1, 2) == 3);
    CHECK(add(-1, -1) == -2);
    CHECK(add(0, 0) == 0);
    CHECK(add(-5, 5) == 0);
}
