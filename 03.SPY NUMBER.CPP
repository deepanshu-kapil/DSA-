#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int sum = 0;
    int product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    if (sum == product)
        cout << "Spy Number";
    else
        cout << "Not a Spy Number";

    return 0;
}
