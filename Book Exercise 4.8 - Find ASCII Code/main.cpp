//
//  main.cpp
//  Book Exercise 4.8 - Find ASCII Code
//
//  Created by ax on 9/12/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    cout << "Find Character from ASCII Code \n";
    
    // Data and Initialization

    int input_code = 0.0;
    char char_output = ' ';
    

    // I
    // ASCII input, i.e.: 0XFF41
    cout << "Enter an ASCII code: ";
    cin >> input_code;
    
    // P
    // convert input code to ascii character
    cout << "You entered: " << input_code << endl;
    char_output = static_cast<char>(input_code);
    
    // O
    cout << "The character is: " << char_output << endl;
    
    return 0;
}
