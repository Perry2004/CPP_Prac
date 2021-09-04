//
//  pointsDistance.cpp
//  PointsDistance
//
//  Created by Perry Zhu  on 2021/7/21.
//
//  Assignment 2, problem 1.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double point1_x, point1_y;
    double point2_x, point2_y;
    double dist;
    
//    ask coordinates for point1.
    cout << "Enter the x and y coordinates of the first point: ";
    cin >> point1_x >> point1_y;
    
//    ask coordinates for point2.
    cout << "Enter the x and y coordinates of the second point: ";
    cin >> point2_x >> point2_y;
    
//    calculate  distance.
    dist = sqrt(
                pow((point2_x - point1_x),2) + pow((point2_y - point1_y),2)
                );
    
//    output the result.
    cout << "The distance between (" << point1_x << "," << point1_y << ")" << " and (" << point2_x << "," << point2_y << ") is " << dist << endl;
    
    return  0;
}
