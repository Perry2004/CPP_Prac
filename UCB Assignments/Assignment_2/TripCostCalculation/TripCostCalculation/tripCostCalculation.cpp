//
//  tripCostCalculation.cpp
//  TripCostCalculation
//
//  Created by Perry Zhu  on 2021/7/21.
//
//Assignment 2, problem 2.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
//    variable declaration
    double airC;
    double lodgingC;
    double mealC;
    double miscellC;
    
    double everydayC;
    double totalC;
    
    int numDays;
    int numTravelers;
    
//    ask for inputs
    cout << "Enter air cost: ";
    cin >> airC;
    
    cout << "Enter lodging cost per day: ";
    cin >> lodgingC;
    
    cout << "Enter meal cost per day: ";
    cin >> mealC;
    
    cout << "Enter miscellaneous cost per day: ";
    cin >> miscellC;
    
    cout << "Enter number of days: ";
    cin >> numDays;
    
    cout << "Enter number of travelers: ";
    cin >> numTravelers;
    
//    calculation
    everydayC = (lodgingC + mealC + miscellC);
    totalC = ((airC + everydayC * numDays) * numTravelers);
    
//    output
    cout << "Your cost per day per traveler is $" << everydayC << endl;
    cout << "Your total cost for the trip is $" << totalC << endl;
    
    return 0;
}
