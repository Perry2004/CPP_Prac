//
//  findMax.cpp
//  FindMax
//
//  Created by Perry Zhu  on 2021/7/22.
//
//  find the maximum of the two input integers.
//

#include <iostream>
using namespace std;

int main() {
    int one;
    int two;
    int max;
    
//    ask for two variables.
    cout << "Please input the first integer: ";
    cin >> one;
    
    cout << "Please input the second integer: ";
    cin >> two;
    
//    find the bigger one.

//    max = one;
//    if (one > two) {
//        max = one;
//    }
//    else {
//        max = two;
//    }
    
    one > two ? max = one : max = two;
    
//    output the result.
    cout << "The maximum of the two integers is: " << max << endl;
    
    return 0;
}
