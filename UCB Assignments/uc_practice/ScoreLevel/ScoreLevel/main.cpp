//
//  main.cpp
//  ScoreLevel
//
//  Created by Perry Zhu  on 2021/7/22.
//

#include <iostream>
using namespace std;

int main () {
    int score;

//    ask for input
    cout << "Please enter the score: ";
    cin >> score;
    
//    classification

//    if (score >= 90) {
//        cout << "The grade is A. " << endl;
//    }
//    if (score >= 80 && score < 90) {
//        cout << "The grades is B. " << endl;
//    }
//    if (score >= 70 && score < 80) {
//        cout << "The grade is C. " << endl;
//    }
//    if (score >= 60 && score < 70) {
//        cout << "The grade is D. " << endl;
//    }
//    if (score < 60) {
//        cout << "The grade is F. " << endl;
//    }
    
    score >= 90 ? cout << "The grade is A. " << endl:
        (score >= 80 ? cout << "The grades is B. " << endl :
            (score >= 70 ? cout << "The grade is C. " << endl :
                (score >= 60 ? cout << "The grade is D. " << endl :
                    cout << "The grade is F. " << endl)));
    
    return 0;
}
