/* Need to comment code */

#include <iostream>

int sum_digits(int x)
{
    if (x < 10) {
        return x;
    }
    else {
        return ((x % 10) + sum_digits(x / 10));
    }
}

int main() {
    int y;
    std::cin >> y;
    std::cout << "Sum of digits = " << sum_digits(y) << "\n";
    return 0;
}

