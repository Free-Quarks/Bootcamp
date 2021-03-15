/* This program adds integers of a large number using a recursive technique. */

#include <iostream>
// This is the function to recursively add the digits of a larger number
int sum_digits(int x)
{
    // This is for the last digit which doesn't need a modulus
    if (x < 10) {
        return x;
    }
    // here we apply a modulus of 10 to get a digit to add and then feed it back
    // in recursively
    else {
        return ((x % 10) + sum_digits(x / 10));
    }
}

// This is the main function to get input from the console and check it
int main() {
    int y;
    char term;
    // getting the input and checking if its an integer
    std::cin >> y;
    if (std::cin.fail()) {
        std::cout << "ERROR: Non-integer value in input\n";
        return 1;
    }
    else {
        // now to check if it is positive or negative too
        if (y<0) {
            std::cout << "ERROR: input value " << y << " is not positive\n";
            return 0;
        }
        // outputing the sum assuming everything ran well
        else {
            std::cout << "Sum of digits = " << sum_digits(y) << "\n";
            return 0;
        }
    }
}

