//
//  main.cpp
//  PowerOfTwo
//
//  Created by Perry Zhu  on 2021/7/23.
//

#include <iostream>
#include <cmath>
using namespace std;

int main () {
//    int n;
//    int nPow;
    
    long long n;
    long long nPow;
    
//    ask for input.
    cout << "Enter N: ";
    cin >> n;
    
    nPow = 1;
    
//    print nums smaller than 2^N.
    for (int i = 0; i <= n; i ++) {
        cout << "2 to the power " << i << " = " << nPow << endl;
        nPow = nPow * 2;
    }
    
    return 0;
}

// if variables are declared to be int, the last result generated when N = 32 is 0. For N = 50, any results with the power greater than 32 are all 0.
// if variables are declared to be long long, the laste result generated when N = 32 is 4294967296, and the last result generated when N = 50 is 1125899906842624. 
