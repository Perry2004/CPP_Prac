//
//  main.cpp
//  2DArray
//
//  Created by Perry Zhu  on 2021/7/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const int NUMBER_OF_ROWS = 7;
    const int NUMBER_OF_COLUMNS = 6;
    
    int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
    int row;
    int col;
    int sum;
    int largest;
    int temp;
    
//    initialization.
//    for (row = 0; row < NUMBER_OF_ROWS; row ++) {
//        for (col = 0; col < NUMBER_OF_COLUMNS; col ++) {
//            matrix[row][col] = 0;
//        }
//    }
    
//    print.
//    for (row = 0; row < NUMBER_OF_ROWS; row ++) {
//        for (col = 0; col < NUMBER_OF_COLUMNS; col ++) {
//            cout << setw(5) << matrix[row][col] << " ";
//        }
//        cout << endl;
//    }
    
//    input.
//    for (row = 0; row < NUMBER_OF_ROWS; row ++) {
//        for (col = 0; col < NUMBER_OF_COLUMNS; col ++) {
//            cout << "Please enter element[" << row << "][" << endl;
//            cin >> matrix[row][col];
//        }
//        cout << endl;
//    }
    
//    sum by row.
//    for (row = 0; row < NUMBER_OF_ROWS; row ++) {
//        sum = 0;
//        for (col = 0; col < NUMBER_OF_COLUMNS; col ++) {
//            sum = sum + matrix[row][col];
//        }
//        cout << "The sum of the elements of row " << row << " is " << sum << endl;
//    }
    
//    largest element in each row.
    for (row = 0; row < NUMBER_OF_ROWS; row ++) {
        largest = matrix[row][0];
        for (col = 0; col < NUMBER_OF_COLUMNS; col ++) {
            if (matrix[row][col] > largest) {
                largest = matrix[row][col];
            }
        }
    }
}
