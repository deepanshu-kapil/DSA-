#include <iostream>
using namespace std;

int main() {
    int n, square, temp;
    bool automorphic = true;

    cout << "Enter a number: ";
    cin >> n;

    square = n * n;
    temp = n;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            automorphic = false;
            break;
        }

        temp = temp / 10;
        square = square / 10;
    }

    if (automorphic)
        cout << "Automorphic Number";
    else
        cout << "Not an Automorphic Number";

    return 0;
}
