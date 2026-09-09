#include <iostream>
using namespace std;

int main() {
    int n, digit, sum;

    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {
        sum = 0;

        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        n = sum;
    }

    cout << "Digital Root: " << n;

    return 0;
}
