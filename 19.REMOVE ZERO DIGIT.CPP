#include <iostream>
using namespace std;

int main() {
    int n, digit, result = 0, place = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "0";
        return 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit != 0) {
            result = result + digit * place;
            place = place * 10;
        }

        n = n / 10;
    }

    cout << "After removing zero: " << result;

    return 0;
}
