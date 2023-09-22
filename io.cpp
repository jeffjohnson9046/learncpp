#include "io.h"
#include <iostream>

using namespace std;

int readNumber() {
    int input = 0;

    cout << "please enter a number you want to add:" << endl;
    cin >> input;

    return input;
}

void writeAnswer(int sum) {
    cout << "the sum is: " << sum << endl;
}