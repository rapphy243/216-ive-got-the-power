#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/power.hpp"

TEST_CASE("unoptimizedDCPower computes the power of different numbers" ) {
    REQUIRE(unoptimizedDCPower(2, 4) == 16);
    REQUIRE(unoptimizedDCPower(10, 5) == 100000);
    REQUIRE(unoptimizedDCPower(9, 8) == 43046721);
    REQUIRE(unoptimizedDCPower(0, 1) == 0);
    REQUIRE(unoptimizedDCPower(5, 0) == 1);
}

TEST_CASE("benchmarking unoptimizedDCPower(x, n)") {
    auto x = GENERATE(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 80, 160, 320, 640, 1280, 2560);
    auto n = GENERATE(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 80, 160, 320, 640, 1280, 2560);
    BENCHMARK("unoptimizedDCPower(" +  std::to_string(x) + ", " + std::to_string(n) + ")") {
        return unoptimizedDCPower(x, n);
    };
}
