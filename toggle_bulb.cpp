#include <iostream>
#include <cmath>  // For sqrt()
using namespace std;

int bulbSwitch(int n) {
    return sqrt(n);  // Count of perfect squares ≤ n
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Number of bulbs ON: " << bulbSwitch(n) << endl;
    return 0;
}
