//
//  main.cpp
//  GuessNum
//
//  Created by Perry Zhu  on 2021/7/23.
//

#include <iostream>
#include <ctime>

using namespace std;

int main () {
    int num;
    int guess;
    
    srand(time(0));
    num = rand() % 101;
    
    cout << "Enter the number: ";
    cin >> guess;
    
    while (true) {
        if (guess == num) {
            cout << "You guessed it. " << endl;
            break;
        }
        
        else if (guess < num) {
            cout << "Try a bigger number. " << endl;
            cout << "Enter the number: ";
            cin >> guess;
        }
        
        else if (guess > num) {
            cout << "Try a smaller number. " << endl;
            cout << "Enter the number: ";
            cin >> guess;
        }
    }
    
    return 0;
}
