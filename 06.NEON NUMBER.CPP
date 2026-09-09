#include <iostream>
using namespace std;

int main() {
    int n, square, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    square = n * n;

    while (square > 0) {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if (sum == n)
        cout << "Neon Number";
    else
        cout << "Not a Neon Number";

    return 0;
}
