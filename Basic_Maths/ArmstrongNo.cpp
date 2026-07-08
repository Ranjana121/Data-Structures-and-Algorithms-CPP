#include <iostream>
using namespace std;
int main() {
    int n, originalNum, temp, digit;
    int count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    originalNum = n;
    temp = n;
    // Count digits
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;
    // Calculate Armstrong sum
    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        int i = 1;
        while (i <= count) {
            power *= digit;
            i++;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong Number.";
    else
        cout << originalNum << " is not an Armstrong Number.";
}