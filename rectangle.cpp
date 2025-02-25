// Given four positive integers A, B, C, D, determine 
// if there’s a rectangle such that the lengths of its sides are A, B, C and D (in any order).
// If any such rectangle exist return 1 else return 0.

#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cout<<"Enter the four side lengths of the rectangle :- ";
    cin >> A >> B >> C >> D;
    if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C)) {
        cout << "Rectangle can be formed successfully!" << endl;
    } else { 
        cout << "Rectangle cannot be formed!" << endl;
    }

    return 0;
}
