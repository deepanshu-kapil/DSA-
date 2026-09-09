#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (original % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not a Harshad Number";

    return 0;
}
