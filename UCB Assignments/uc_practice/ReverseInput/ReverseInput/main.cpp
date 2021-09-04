//
//  main.cpp
//  ReverseInput
//
//  Created by Perry Zhu  on 2021/7/24.
//

#include <iostream>
using namespace std;

int main () {
    int i = 0;
    int num;
    
//    declare the array.
    cout << "Enter numbers: ";
    cin >> num;
    int list[5];
    
//    input.
    while (i < num) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> list[i];
        i ++;
    }
    
//    output.
    cout << "Input finished.\n";
    cout << "Output: ";
    
    for (int j = i - 1; j >= 0; j --) {
        cout << list[j] << " ";
    }
    cout << endl;
    
    return 0;
}
