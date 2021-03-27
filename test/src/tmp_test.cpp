#include <catch2/catch.hpp>

#include "friday/tmp.hpp"

TEST_CASE("TmpAddTest", "CheckValues")
{
  REQUIRE(tmp::add(1, 2) == 3);
  REQUIRE(true==true);
}

