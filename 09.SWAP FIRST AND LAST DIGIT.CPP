#include <iostream>
using namespace std;

int main() {
    int n, first, last, temp, digits = 1;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    // Last digit
    last = n % 10;

    // Find first digit and place value
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    // Remove first and last digit
    n = n % digits;
    n = n / 10;

    // Create swapped number
    int result = last * digits + n * 10 + first;

    cout << "Number after swapping: " << result;

    return 0;
}
