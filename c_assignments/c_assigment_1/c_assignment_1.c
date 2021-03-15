/* This program adds the integrers of a larger integer together using a
 * recursive algorithm instead of loops */

#include <stdio.h>

// This first function here wis what does the adding recusively
int sum_digits(int x)
{
    // Here for the last digit, less than 10, we just return the digit
    if (x < 10) { 
        return x;
    }
    // Here we have the recursion moving through the digits 1 at a time 
    else {
        return ((x % 10) + sum_digits(x / 10));
    }
}

// This is the main function which gets the input from the console 
int main( void )
{
    // getting the input
    int y;
    char term;
    // This checks if the input value is an integer or not. It doesn't work too
    // well since if any integer is in the input it will read that as an input
    // and still run, so only works for pure characters or strings
    if (scanf("%d%c", &y, &term) == 2) {
        // now to run some conditionals for error checking
        if (y < 0) {
            printf("ERROR: input value %d is not positive\n", y);
            return 0;
        }
        else {
            // printing the result 
            printf("Sum of digits = %d\n", sum_digits(y));
            return 0;
        }
    }
    else {
        printf("ERROR: Non-integer value in input\n");
        return 1;
    }
}



