//
//  main.cpp
//  specialPattern
//
//  Created by Perry Zhu  on 2021/7/24.
//

#include <iostream>
using namespace std;
int main () {
    int n;
    int num = 1;
    
    cout << "Enter N: ";
    cin >> n;
    
    for (int i = 1; i <= n; i ++) {
        cout << " " <<  num << " ";
        
        if (i < (int) (n / 2) + 0.5) {
            num ++;
        }
        else {
            num --;
        }
    }
    
    cout << endl;
    
    return 0;
}
