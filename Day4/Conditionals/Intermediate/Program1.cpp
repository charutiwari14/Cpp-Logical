// Check whether a number between 1 to 100 is a prime number (use conditionals, not loops for multiple tests).


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number between 1 to 100: ";
    cin >> n;

    if (n < 1|| n>100-9) {
        cout << "Enter between 1 and 100";
    }
    else if (n == 2 || n == 3 || n == 5 || n == 7) {
        cout << "Prime";
    }
    else if (n % 2 == 0) {
        cout << "Not Prime";
    }
    else if (n % 3 == 0) {
        cout << "Not Prime";
    }
    else if (n % 5 == 0) {
        cout << "Not Prime";
    }
    else if (n % 7 == 0) {
        cout << "Not Prime";
    }
    else {
        cout << "Prime";
    }

    return 0;
}