#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, temp, gcd, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    // Find GCD
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;
    
    cout << "LCM = " << lcm;
}