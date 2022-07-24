#include "console.h"
#include <string>
#include "strlib.h"
#include "testing-examples.h"
#include "testing/SimpleTest.h"

using namespace std;

// What happens to `word`?
void pollOne() {
    string word = "hello";
    word[1] = 'a';
    cout << word << endl;
}

// Which of A, B, and/or C is valid?
//void pollTwo() {
//    char letter = '!';
//    string word = "hi";
//    string letterStr = "!";

//    // A
//    word += letter;

//    // B
//    word = word + letter;

//    // C
//    word = word + letterStr;

//    cout << word << endl;
//}

// Will abc < bc, abc > bc, or C++ won't be able to evaluate the
// expression?
//void pollThree() {
//    string abc = "abc";
//    string bc = "bc";
//    if (abc < bc) {
//        cout << "abc < bc" << endl;
//    } else if (abc > bc) {
//        cout << "abc > bc" << endl;
//    }
//}

// Which statement will be true for the C++ strings `Abc` and `abc`?
//void pollFour() {
//    string abcUpper = "Abc";
//    string abcLower = "abc";
//    if (abcUpper < abcLower) {
//        cout << "Abc < abc" << endl;
//    } else if (abcUpper > abcLower) {
//        cout << "Abc > abc" << endl;
//    } else {
//        cout << "Abc == abc" << endl;
//    }
//}

// What happens to hiThere?
//void pollFive() {
//    string hiThere = "hi" + "there";
//    cout << hiThere << endl;
//}

// What happens to hiThere?
//void pollSix() {
//    string hiThere = "hi" + '?';
//    cout << hiThere << endl;
//}

void loopingOverStrFor(string word) {
    /* TODO: FILL IN */
    for (int letterIndex = 0; letterIndex < word.length(); letterIndex++) {
        cout << word[letterIndex] << endl;
    }
}
void loopingOverStrForEach(string word) {
    /* TODO: FILL IN */
    for (char letter : word) {
        cout << letter << endl;
    }
}

void alphabetLoop() {
    for (char letter = 'a'; letter <= 'z'; letter++) {
        cout << letter << endl;
    }
}

void weirdCstringExamples() {
    string hi42 = "hi" + 42;          // C-string + int
    cout << hi42 << endl;             // garbage

//    int castN = (int)"42";            // Qt error; attempts to cast memory address of C-string
//    int n = stringToInteger("42");    // Works with Stanford string library function!
//    cout << n << endl;

    string okayHiQuestion = "" + string("hi") + '?'; // Auto-converts due to the C++ string!
    cout << okayHiQuestion << endl;
}

int main() {

    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }

//    pollOne();

//    char ex = '!';
//    string hello = "hello";
//    string s = hello + ex;
//    string t = ex + hello;
//    cout << s << " " << t << endl;
//    pollTwo();
//    pollThree();
//    pollFour();
//    pollFive();
//    pollSix();

//    loopingOverStrFor("Kylie Jue");
//    cout << endl;
//    loopingOverStrForEach("Nick Bowman");
//    cout << endl;

//    alphabetLoop();
//    cout << endl;

//    weirdCstringExamples();
    return 0;
}
