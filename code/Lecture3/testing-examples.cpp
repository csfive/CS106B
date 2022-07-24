/* All Examples from Introduction to C++ Lecture
 * Note: this project will compile with warnings about
 * unused variables.
 */

#include <iostream>
#include <cmath>
#include "console.h"
#include "testing-examples.h"
#include "testing/SimpleTest.h"

using namespace std;

// functions that main uses:

int factorial(int number) {
    int result = 1;
    for (int n = number; n > 1; n--) {
        result *= n;
    }
    return result;
}

PROVIDED_TEST("Some provided tests.") {
    EXPECT_EQUAL(factorial(1), 1);
    EXPECT_EQUAL(factorial(2), 2);
    EXPECT_EQUAL(factorial(3), 6);
    EXPECT_EQUAL(factorial(4), 24);
}

