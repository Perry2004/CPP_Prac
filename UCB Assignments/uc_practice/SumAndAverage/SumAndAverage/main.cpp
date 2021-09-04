//
//  main.cpp
//  SumAndAverage
//
//  Created by Perry Zhu  on 2021/7/23.
//

#include <iostream>
using namespace std;

int main () {
    int num;
    int indx = 0;
    int temp;
    int sum = 0;
    int avg;
    
    cout << "Enter the number of integers in the list: ";
    cin >> num;
    
//    while (indx < num) {
//        cout << "Enter integer" << indx + 1 <<" : ";
//        cin >> temp;
//        sum += temp;
//        indx ++;
//    }
    
    while (indx != num) {
        cout << "Enter integer" << indx + 1 <<" : ";
        cin >> temp;
        sum += temp;
        indx ++;
    }
    
    avg = sum / num;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    return 0;
}
