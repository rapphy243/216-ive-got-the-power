#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/power.hpp"

TEST_CASE("optimizedDCPower computes the power of different numbers" ) {
    REQUIRE(optimizedDCPower(2, 4) == 16);
    REQUIRE(optimizedDCPower(10, 5) == 100000);
    REQUIRE(optimizedDCPower(9, 8) == 43046721);
    REQUIRE(optimizedDCPower(0, 1) == 0);
    REQUIRE(optimizedDCPower(5, 0) == 1);
}

TEST_CASE("benchmarking optimizedDCPower(x, n)") {
    auto x = GENERATE(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 80, 160, 320, 640, 1280, 2560);
    auto n = GENERATE(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 80, 160, 320, 640, 1280, 2560);
    BENCHMARK("optimizedDCPower(" +  std::to_string(x) + ", " + std::to_string(n) + ")") {
        return optimizedDCPower(x, n);
    };
}
