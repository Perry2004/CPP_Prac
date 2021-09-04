//
//  main.cpp
//  AscendingOrNot
//
//  Created by Perry Zhu  on 2021/7/23.
//

#include <iostream>
using namespace std;

int main () {
    int one = 0;
    int two = 0;
    
    while (true) {
        one = two;
        cout << "Enter value: ";
        cin >> two;
        
        if (one == -1 || two == -1) {
            cout << "Exit. ";
            break;
        }
        
        else {
            if (one >= two) {
                cout << "The list is not sorted. " << endl;
                break;
            }
        }
    }
    
    return  0;
}
