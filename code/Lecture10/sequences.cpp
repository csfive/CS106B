#include <iostream>
#include "console.h"
using namespace std;

void generateSequences(int length);

void runSequencesDemo() {
    generateSequences(4);
}

void generateSequenceHelper(int length, string sequence) {
    // Base case: length = 0, no more flips
    if (length == 0) {
        cout << sequence << endl;
    } else {
        // Recursive cases (when length > 0)
        generateSequenceHelper(length - 1, sequence + 'H'); // Add H to the sequence
        generateSequenceHelper(length - 1, sequence + 'T'); // OR add T to the sequence
    }
}

void generateSequences(int length) {
    generateSequenceHelper(length, "");
}
