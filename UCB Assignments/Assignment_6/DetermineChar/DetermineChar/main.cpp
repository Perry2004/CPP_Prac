//
//  main.cpp
//  DetermineChar
//
//  Created by Perry Zhu  on 2021/7/28.
//

#include <iostream>
using namespace std;

bool isVowel (char);
bool isDigit (char);
bool isLetter (char);

bool isVowel (char c) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i ++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

bool isDigit (char c) {
    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < 10; i ++) {
        if (c == digits[i]) {
            return true;
        }
    }
    return false;
}

bool isLetter (char c) {
    char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 0; i < 52; i ++) {
        if (c == letters[i]) {
            return true;
        }
    }
    return false;
}

//  test.

//int main () {
//    char a = 'a';
//    char b = '1';
//    char c = 'd';
//    cout << isVowel(b) << endl;
//    cout << isDigit(a) << endl;
//    cout << isLetter(c) << endl;
//
//    return 0;
//}
