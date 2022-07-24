#include <iostream>
#include "console.h"
#include "strlib.h"
#include "filelib.h"
#include "simpio.h"
#include <fstream>
#include "map.h"
#include "set.h"
using namespace std;

void uniqueWordProgram();
void generateUniqueWords(Set<string>& uniqueWords, const Vector<string>& lines);
void generateWordCounts(Map<string, int>& wordCounts, const Vector<string>& lines);


int main() {
    uniqueWordProgram();
    cout << "All done!" << endl;
    return 0;
}

void uniqueWordProgram() {
    cout << "Welcome to the world's most unique program! (Ha – get it?)" << endl;
    cout << "This program leverages the power of ADTs to find the number of \n"
            "unique words contained within a file!" << endl;
    cout << "Sit back and watch the power of ADTs at work!" << endl;

    cout << endl;
    while (true) {
        string filename = getLine("Please enter the filename you would like to process: ");
        if (filename == "") {
            break;
        }

        // Read file's lines into a vector
        ifstream in;
        Vector<string> fileLines;
        if (openFile(in, filename)) {
            readEntireFile(in, fileLines);
        } else {
            cout << "Could not open file, please enter another filename." << endl;
            continue; // Exits this iteration of the while loop to reprompt the user
        }

        Set<string> uniqueWords;
        generateUniqueWords(uniqueWords, fileLines);
        cout << "That file contained " << uniqueWords.size() << " unique words. Wow!" << endl << endl;

//        Map<string, int> wordCounts;
//        generateWordCounts(wordCounts, fileLines);
//        cout << "Here are the word counts for the first 10 words (alphabetically) in the file: " << endl;
//        for (string word: wordCounts.keys().subList(0, 10)) {
//            cout << word << ": " << wordCounts[word] << endl << endl;
//        }
    }
}

void generateUniqueWords(Set<string>& uniqueWords, const Vector<string>& lines) {
    /*
     * TODO: Write code that processes the text of the file stored in
     * lines and produces a set containing all the unique words in the
     * file!
     */
}

void generateWordCounts(Map<string, int>& wordCounts, const Vector<string>& lines) {
    /*
     * TODO: Write code that processes the text of the file stored in
     * lines and produces a map containing the counts of all the unique words
     * in the file!
     */
}

