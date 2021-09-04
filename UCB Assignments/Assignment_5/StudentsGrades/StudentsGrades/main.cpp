//
//  main.cpp
//  StudentsGrades
//
//  Created by Perry Zhu  on 2021/7/26.
//

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main () {
    const int SIZE = 10;
    int num;
    
    int highest;
    int lowest;
    double avg;
    double sum;
    
//    declare arrays.
    int quiz1[SIZE];
    int quiz2[SIZE];
    int finalExam[SIZE];
    int finalGrade[SIZE];
    
//    pupulate the arrays.
    srand(time(0));
    
    for (int i = 0; i < SIZE; i ++) {
        num = rand() % 81 + 20;
        quiz1[i] = num;
    }
    
    for (int i = 0; i < SIZE; i ++) {
        num = rand() % 81 + 20;
        quiz2[i] = num;
    }
    
    for (int i = 0; i < SIZE; i ++) {
        num = rand() % 81 + 20;
        finalExam[i] = num;
    }
    
//    calculate final grades.
    for (int i = 0; i < SIZE; i ++) {
        finalGrade[i] = quiz1[i] * 0.3 + quiz2[i] * 0.3 + finalExam[i] * 0.4;
    }
    
//    find lowest, highest, and class average.
    lowest = finalGrade[0];
    highest = finalGrade[0];
    sum = 0;
    
    for (int i = 0; i < SIZE; i ++) {
        int temp = finalGrade[i];
        if (temp > highest) {
            highest = temp;
        }
        if (temp < lowest) {
            lowest = temp;
        }
        sum += temp;
    }
    
    avg = sum / SIZE;
    
    cout << "The highest final grade is: " << highest << endl;
    cout << "The lowest final grade is: " << lowest << endl;
    cout << "The class average is: " << avg << endl;
    
//    adjust to new average.
    
    
    return 0;
}
