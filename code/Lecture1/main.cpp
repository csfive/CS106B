/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */


#include "console.h"
#include "simpio.h"
using namespace std;

int main() {
   int currentTemp = 80;
   int breakingPoint = 100;
   if (currentTemp > breakingPoint) {
       cout << "We're melting!" << endl;
   } else {
       cout << "We're not melting." << endl;
   }
   return 0;  // must return an int to indicate
              // successful program completion
}











//#include<iostream>
//#include "console.h"

//using namespace std;

//int doubleValue(int x) {
//    x *= 2;
//    return x;
//}

//int main() {
//    int myValue = 5;
//    int result = doubleValue(myValue);

//    cout << "myValue: " << myValue << " ";
//    cout << "result: " << result << endl;

//    return 0;
//}










