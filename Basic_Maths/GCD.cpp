#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        temp = b;   //stores the original value of b
        b = a % b;  //remainder becomes divisor for next iteration
        a = temp;   //divisor becomes dividend for next iteration
    }

    cout << "GCD = " << a;
}