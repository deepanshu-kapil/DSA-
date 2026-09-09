#include <iostream>
using namespace std;

int main() {
    int n, digit, smallest = 9;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        smallest = 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit < smallest)
            smallest = digit;

        n = n / 10;
    }

    cout << "Smallest digit: " << smallest;

    return 0;
}
