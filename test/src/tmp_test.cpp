#include <catch2/catch.hpp>

#include "friday/tmp.hpp"

TEST_CASE("TmpAddTest", "CheckValues")
{
    REQUIRE(tmp::add(1, 2) == 3);
    REQUIRE(true==true);
    REQUIRE(false==false);
}


TEST_CASE("TmpAddTest2", "CheckValues")
{
    REQUIRE(tmp::add(2, 4) == 6);
}

