#include <doctest/doctest.h>

TEST_SUITE_BEGIN("unit");

TEST_CASE("correct constructor severity") {
    const auto getNumber = [] { constexpr auto kNumber = 42; return kNumber; };
    CHECK(getNumber() == 42);
}

TEST_SUITE_END();