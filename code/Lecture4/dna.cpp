#include "testing/SimpleTest.h"
#include <string>
#include <cctype>
#include "strlib.h"

using namespace std;

/* This function takes in a string representing a DNA strand
 * and produces a new string that is the complementary DNA
 * sequence for that strand. This sequence is generated according
 * to DNA pairing rules (A pairs with T and C pairs with G).
 * 
 * The output of this function should be in all uppercase letters
 * and the behavior of the function should be case-insensitive.
 * 
 * THIS FUNCTION IS BUGGY!!!
 */
string complement(string dnaStrand) {
    string result = "";
    for (char base: dnaStrand) {
        if (base == 'A') {
            result += 'T';
        } else if (base == 'T') {
            result += 'A';
        } else if (base == 'G') {
            result += 'C';
        } else if (base == 'C') {
            result += 'G';
        }
    }
    return result;
}

/* * * * * * Test Cases * * * * * */
PROVIDED_TEST("Test some simple inputs into the complement function.") {
    EXPECT_EQUAL(complement("A"), "T");
    EXPECT_EQUAL(complement("C"), "G");
    EXPECT_EQUAL(complement("ATG"), "TAC");
    EXPECT_EQUAL(complement("GGGG"), "CCCC");
}

STUDENT_TEST("TODO: Write some awesome STUDENT_TESTs!") {
    // TODO fill me in!
}

