#include <iostream>
#include <cassert>
#include "src/power.hpp"

using namespace std;

int main() {

    assert(naivePower(2, 4) == 16);
    assert(naivePower(10, 5) == 100000);
    assert(naivePower(9, 8) == 43046721);
    assert(naivePower(0, 1) == 0);
    assert(naivePower(5, 0) == 1);

    assert(unoptimizedDCPower(2, 4) == 16);
    assert(unoptimizedDCPower(10, 5) == 100000);
    assert(unoptimizedDCPower(9, 8) == 43046721);
    assert(unoptimizedDCPower(0, 1) == 0);
    assert(unoptimizedDCPower(5, 0) == 1);

    assert(optimizedDCPower(2, 4) == 16);
    assert(optimizedDCPower(10, 5) == 100000);
    assert(optimizedDCPower(9, 8) == 43046721);
    assert(optimizedDCPower(0, 1) == 0);
    assert(optimizedDCPower(5, 0) == 1);

    cout << "The power 4 of 2 is: " << naivePower(2, 4) << endl;
    cout << "The power 5 of 10 is: " << unoptimizedDCPower(10, 5) << endl;
    cout << "The power 8 of 9 is: " << optimizedDCPower(9, 8) << endl;
}
