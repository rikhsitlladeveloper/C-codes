//
// Created by tilla on 12/2/22.
//
#include "calculate_power.h"
#include <iostream>
using namespace std;

void calculate_pow(){
    double value = 1;
    int pow;
    double result;
    while(value != 0){
        cout << "Insert any positive value (0 for exit)" << endl;
        cin >> value;
        cout << "Insert power value" << endl;
        cin >> pow;
        result = power(value, pow);
        cout << "Power of " << value << " is " << result << endl;
    }
}

double power(double x, int n){
    double result = 1;
    int i=0;
    if (n == 0 || x == 1)
        return 1;

    else if (x == -1){
        if (n % 2 == 0)
            return 1;
        else
            return -1;
    }

    else if (n > 0){
        while(n>i){
            i++;
            result = result * x;
        }
    }
    else if (n < 0){
        while(n<i){
            i--;
            result = result / x;
        }
    }
    return result;
}