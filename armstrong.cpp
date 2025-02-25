//write a program to check if a number is armstrong or not.

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    int num = n;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number!" << endl;
    } else {
        cout << n << " is not an Armstrong number!" << endl;
    }

    return 0;
}
