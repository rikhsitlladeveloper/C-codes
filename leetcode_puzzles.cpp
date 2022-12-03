//
// Created by tilla on 01/12/22.
//
#include "leetcode_puzzles.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int romanToInt(string s){
    /*
        Roman numerals to integers: such as I, V, X, L, C, D and M.

        Symbol       Value
        I             1
        V             5
        X             10
        L             50
        C             100
        D             500
        M             1000

        1 <= s.length <= 15
        s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
        It is guaranteed that s is a valid roman numeral in the range [1, 3999].
    */
    int result=0;
    char last_char = ' ';
    for (int i=0; i<s.length();i++) {
        if (last_char == 'I' && s[i] == 'V')
            result = result + 3;
        else if (last_char == 'I' && s[i] == 'X')
            result = result + 8;
        else if (last_char == 'X' && s[i] == 'L')
            result = result + 30;
        else if (last_char == 'X' && s[i] == 'C')
            result = result + 80;
        else if (last_char == 'C' && s[i] == 'D')
            result = result + 300;
        else if (last_char == 'C' && s[i] == 'M')
            result = result + 800;
        else {

            switch (s[i]) {
                case 'I':
                    result = result + 1;
                    break;

                case 'V':
                    result = result + 5;
                    break;

                case 'X':
                    result = result + 10;
                    break;
                case 'L':
                    result = result + 50;
                    break;
                case 'C':
                    result = result + 100;
                    break;
                case 'D':
                    result = result + 500;
                    break;
                case 'M':
                    result = result + 1000;
                    break;
            }
        }
        last_char = s[i];
    }
    return result;
}



int sqrt(int x){
    if (x == 1 || x == 0)
        return x;

    int mySqrt = 1 ;
    int i = 1;
    while (mySqrt <= x){
        i++;
        mySqrt = i * i;
    }
    return i - 1;
}

void calculate_sqrt(){
    int value = 1;
    int result;
    while(value != 0){
        cout << "Insert any positive value (0 for exit)" << endl;
        cin >> value;
        result = sqrt(value);
        cout << "Sqrt of " << value << " is " << result << endl;
    }
}


void Roman_to_Integer(){
    string value = {' '};
    int result;
    while(value != "q"){
        cout << "Insert Roman numerals such as (I, V, X, L, C, D and M)  (q for exit)" << endl;
        cin >> value;
        result = romanToInt(value);
        cout << "Roman numerals " << value << " is " << result << " in integer format." << endl;
    }
}

