#include <iostream>
#include "console.h"
#include "testing/SimpleTest.h"

// Clutch libraries you should get to know!
#include "strlib.h"
#include "simpio.h"
#include "vector.h"

using namespace std;

void eliminateNegativity(Vector<int> v);


int main() {
    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }

    // Example 1: Liftoff!
//    for (int i = 10; i > 0; i--) {
//        cout << i << endl;
//    }
//    cout << "Liftoff!" << endl;


    // Example 2: Favorite food insult machine
//    string userName = getLine("What is your name?");
//    string favoriteFood = getLine("What is your favorite food?");
//    cout << "Hello, " << userName << ", it is nice to meet you!" << endl;
//    cout << "You like " << favoriteFood << "?  Ugh that's so 2009!" << endl;

    // Example 3: Square a number!
//    cout << "This program prints squares of numbers..." << endl;
//    while (true) {
//        string input = getLine("Please enter the number you would like to be squared (Enter/Return to quit):");
//        if (input == "") break;

//        int inputNum = stringToInteger(input); // Cool use of a strlib function!

//        /* Cool feature: the << operator can print strings and numbers! */
//        cout << "The square of " << inputNum << " is: " << inputNum * inputNum << "." << endl;
//    }
//    cout << "Done squaring numbers." << endl;


//    Vector<int> nums = { 1, -4, 18, -11 };
//    eliminateNegativity(nums);
//    cout << nums << endl;

    return 0;
}

void eliminateNegativity (Vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            v[i] = -1 * v[i];
        }
    }
}
