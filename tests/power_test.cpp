#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/power.hpp"

TEST_CASE( "naivePower computes the power of different numbers" ) {
    REQUIRE(naivePower(2, 4) == 16);
    REQUIRE(naivePower(10, 5) == 100000);
    REQUIRE(naivePower(9, 8) == 43046721);
    REQUIRE(naivePower(0, 1) == 0);
    REQUIRE(naivePower(5, 0) == 1);
}

TEST_CASE( "unoptimizedDCPower computes the power of different numbers" ) {
    REQUIRE(unoptimizedDCPower(2, 4) == 16);
    REQUIRE(unoptimizedDCPower(10, 5) == 100000);
    REQUIRE(unoptimizedDCPower(9, 8) == 43046721);
    REQUIRE(unoptimizedDCPower(0, 1) == 0);
    REQUIRE(unoptimizedDCPower(5, 0) == 1);
}

TEST_CASE( "optimizedDCPower computes the power of different numbers" ) {
    REQUIRE(optimizedDCPower(2, 4) == 16);
    REQUIRE(optimizedDCPower(10, 5) == 100000);
    REQUIRE(optimizedDCPower(9, 8) == 43046721);
    REQUIRE(optimizedDCPower(0, 1) == 0);
    REQUIRE(optimizedDCPower(5, 0) == 1);
}

TEST_CASE("benchmarking the naivePower function") {
    BENCHMARK("naivePower(20)") {
        return naivePower(0,1);
    };
}
