#include <iostream>
using namespace std;

void swap(int &a, int &b) { 
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Value of a before swapping: " << a << endl;
    cout << "Value of b before swapping: " << b << endl;

    swap(a, b); 

    cout << "Value of a after swapping: " << a << endl;
    cout << "Value of b after swapping: " << b << endl;

    return 0;
}
