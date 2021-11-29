/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gianni Angelone
 */

/*
Write a program to test an integer value to determine if it is odd or even, returning an 'odd' or 'even' response.
*/

#include "std_lib_facilities.h" //We include our given header.h file

int main()
{
    int integer, x; //Here, integers are declared
    cout << "Please enter an integer number: ";
    cin >> integer; //Gathering information from user
    x = integer % 2; //By using a remainder of 2, we can easily determine whether a number is odd or even.
    if (x == 0) {
        cout << "The number " << integer << " is an even number.";
    }
    else {
        cout << "The number " << integer << " is an odd number.";
    }
    return 0;
}

