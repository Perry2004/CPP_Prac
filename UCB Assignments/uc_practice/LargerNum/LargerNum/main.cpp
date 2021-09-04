//
//  main.cpp
//  LargerNum
//
//  Created by Perry Zhu  on 2021/7/27.
//

#include <iostream>
using namespace std;

double findLarger (double, double);
double compareThree (double, double, double);
void initializeArray (int[], double);
void fillArray (int[]);
void printArray (int[]);
double getArraySum (int[]);
int findMaxIndex (int[]);
void copyArray (int[]);

const int SIZE = 10;

int main () {
    
//    double a = 9.5;
//    double b = 4.7;
//    double c = 5.8;
//    double larger = compareThree(a, b, c);
//    cout << larger << endl;
    int array1[SIZE];
    int array2[SIZE];
//    initializeArray(array1, 2);
    fillArray(array1);
    printArray(array1);
    cout << getArraySum(array1) << endl;
    cout << findMaxIndex(array1);
    
    cout << endl;
    
    return 0;
}

double findLarger (double x, double y) {
    if (x > y) {
        return x;
    }
    return y;
}

double compareThree (double x, double y, double z) {
    return findLarger (findLarger (x, y), z);
}

void initializeArray (int arr[SIZE], double value) {
    for (int i = 0; i < SIZE; i ++) {
        arr[i] = value;
    }
}

void fillArray (int arr[]) {
    double temp;
    for (int i = 0; i < SIZE; i ++) {
        cout << "Please enter the value " << i + 1 << ": ";
        cin >> temp;
        arr[i] = temp;
    }
}

void printArray (int arr[]) {
    for (int i = 0; i < SIZE; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
double getArraySum (int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i ++) {
        sum += arr[i];
    }
    
    return sum;
}

int findMaxIndex (int arr[]) {
    int maxI = 0;
    for (int i = 0; i < SIZE; i ++) {
        if (arr[i] > arr[maxI]) {
            maxI = i;
        }
    }
    
    return maxI;
}

void copyArray (int arr[], int arr2[]) {
    for (int i = 0; i < SIZE; i ++) {
        arr2[i] = arr[i];
    }
}
