//wap to count the number of trailing zeroes in a factorial 
#include <iostream>
using namespace std;

int countTrailingZeroes(int n) {
    int count = 0;
    
    // Count factors of 5
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Trailing zeroes in " << n << "! are: " << countTrailingZeroes(n) << endl;
    
    return 0;
}
