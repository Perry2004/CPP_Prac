//
//  main.cpp
//  EvenOddAndZero
//
//  Created by Perry Zhu  on 2021/7/28.
//

#include <iostream>
using namespace std;

void initialize (int&, int&, int&);
void getNumber (int&);
void classifyNumber (int, int&, int&, int&);
void printResults (int, int, int);

int main () {
    int number;
    int zeros;
    int evens;
    int odds;
    
    initialize(zeros, odds, evens);
    
    int N = 10;
    cout << "Please enter " << N << " integers: ";
    for (int i = 0; i < N; i ++) {
        getNumber(number);
        classifyNumber(number, zeros, odds, evens);
    }
    
    printResults(zeros, odds, evens);
    
    return 0;
}

void initialize (int& zeros, int& odds, int& evens) {
    zeros = 0;
    odds = 0;
    evens = 0;
}

void getNumber (int& num) {
    cin >> num;
}

void classifyNumber (int num, int& zeros, int& odds, int& evens) {
    if (num == 0) {
        zeros ++;
    }
    else {
        if (num % 2 == 0) {
            evens ++;
        }
        else {
            odds ++;
        }
    }
}

void printResults (int zeros, int odds, int evens) {
    cout << "The number of zeros: " << zeros << endl;
    cout << "The number of odds: " << odds << endl;
    cout << "The number of evens: " << evens << endl;
}
