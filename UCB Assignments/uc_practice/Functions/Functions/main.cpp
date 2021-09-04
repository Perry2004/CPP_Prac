//
//  main.cpp
//  Functions
//
//  Created by Perry Zhu  on 2021/7/27.
//

#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>
using namespace std;
int main () {
    
//    pre-defined functions.
    int x;
    double u, v;
    cout << static_cast<char>(toupper('c')) << endl;
    
    u = 4.2;
    v = 3.0;
    cout << pow(u, v) << endl;
    cout << pow (5, 4) << endl;
    cout << u + pow (3, 3) << endl;
    u = u + pow (3, 3);
    cout << u << endl;
    x = -15;
    cout << abs(x) << endl;
    
    
    
    return 0;
}
