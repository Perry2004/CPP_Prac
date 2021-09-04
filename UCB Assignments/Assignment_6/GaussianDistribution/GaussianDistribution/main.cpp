//
//  main.cpp
//  GaussianDistribution
//
//  Created by Perry Zhu  on 2021/7/28.
//

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.1315;
const double e = exp(1);

double phi1 (double);
double phi2 (double, double, double);
double Phi1 (double);
double Phi2 (double, double, double);

double phi1 (double x) {
    double result = 1 / (sqrt(2 * pi)) * exp(-pow(x, 2) / 2);
    return result;
}

double phi2(double x, double y, double z) {
    double a = (x - y) / z;
    double result = phi1(a) / z;
    return result;
}

double Phi1 (double x) {
    double phi1Value = phi1(x);
    double mul = 0;
    int imp = 1;
    for (int i = 1; i < 51; i ++) {
        mul = pow(x, imp) / imp;
        imp += i * 2;
    }
    double result = 1 / 2 + phi1Value * mul;
    return result;
}

double Phi2 (double x, double y, double z) {
    double result = Phi1((x - y) / z);
    return result;
}

//  test.
int main () {
    double Phi2Res1 = Phi2(820, 1019, 209);
    double Phi2Res2 = Phi2(1500, 1019, 219);
    double Phi2Res3 = Phi2(1500, 1025, 231);
    
    cout << "Result 1: " << Phi2Res1 << endl;
    cout << "Result 2: " << Phi2Res2 << endl;
    cout << "Result 3: " << Phi2Res3 << endl;
}
