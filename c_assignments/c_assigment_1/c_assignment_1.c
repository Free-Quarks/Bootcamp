/* Need to comment code */

#include <stdio.h>

int sum_digits(int x)
{
    if (x < 10) {
        return x;
    }
    else {
        return ((x % 10) + sum_digits(x / 10));
    }
}

int main( void )
{
    int y;
    scanf("%d", &y);
    printf("Sum of digits = %d\n", sum_digits(y));
    return 0;
}



