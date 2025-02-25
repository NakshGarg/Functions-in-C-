// Given a positive integer num, return the number of positive integers less than 
// or equal to num whose digit sums are even.
// The digit sum of a positive integer is the sum of all its digits.

#include <iostream>
using namespace std;

int countEven(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        int sum = 0, temp = i;
        while (temp) sum += temp % 10, temp /= 10; // Calculate digit sum
        if (sum % 2 == 0) count++; // Check if even
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    cout << countEven(num) << endl;
    return 0;
}
