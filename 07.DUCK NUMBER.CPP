#include <iostream>
using namespace std;

int main() {
    int n, digit;
    bool duck = false;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit == 0) {
            duck = true;
            break;
        }

        n = n / 10;
    }

    if (duck)
        cout << "Duck Number";
    else
        cout << "Not a Duck Number";

    return 0;
}
