//
//  main.cpp
//  ArrayMax
//
//  Created by Perry Zhu  on 2021/7/24.
//

#include <iostream>
using namespace std;

int main () {
    int list[] {14, 2, 97, 10, 3, 5, -19, 56, 89, -43};
    int max = list[1];
    
    for (int i = 0; i < 10; i ++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    
    cout << "The maximum value in the array is: " << max << endl;
}
