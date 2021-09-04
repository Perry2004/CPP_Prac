//
//  main.cpp
//  QuadraticFunction
//
//  Created by Perry Zhu  on 2021/7/22.
//
//  Assignment 3, problem 1.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a;
    double b;
    double c;
    double disc;
    double rootOne = 0;
    double rootTwo = 0;
    double veriResOne;
    double veriResTwo;
    
//    ask for input.
    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;
    
    cout << "Enter c: ";
    cin >> c;
    
//    calculate discriminant.
    disc = pow(b, 2) - 4 * a * c;
    
//    circumstance 1: discriminant is negative.
    if (disc < 0) {
        cout << "No roots exist. ";
    }
    
//    circumstance 2: discriminant equals 0.
    else if (disc == 0) {
        rootOne = (-b + sqrt(disc)) / (2 * a);
        cout << "The computed root is: " << rootOne << endl;
    }
//    circumstance 3: discriminant is positive.
    else if (disc > 0) {
        rootOne = (-b + sqrt(disc)) / (2 * a);
        rootTwo = (-b - sqrt(disc)) / (2 * a);
        cout << "The computed roots are: " << rootOne << " and " << rootTwo << endl;
    }
    
//    verification.
    if (disc == 0) {
        veriResOne = a * pow(rootOne, 2) + b * rootOne + c;
        cout << "x1 verification was successful, a.x1^2+b.x1+c = " << veriResOne << endl;
    }
    if (disc > 0) {
        veriResOne = a * pow(rootOne, 2) + b * rootOne + c;
        veriResTwo = a * pow(rootTwo, 2) + b * rootTwo + c;
        cout << "x1 verification was successful, a.x1^2+b.x1+c = " << veriResOne << endl;
        cout << "x2 verification was successful, a.x2^2+b.x2+c = " << veriResTwo << endl;
    }
    
    return 0;
}
