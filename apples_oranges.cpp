// N people are standing in a queue in which A of them l
// ike apple and B of them like oranges. 
// How many people like both apple and oranges. 
// Note:- It is guaranteed that each and every person likes at least one of the given two.
#include <iostream>
using namespace std;

int findBoth(int N, int A, int B) {
    return A + B - N;
}

int main() {
    int N, A, B;
    cout << "Enter total people (N): ";
    cin >> N;
    cout << "Enter people who like apples (A): ";
    cin >> A;
    cout << "Enter people who like oranges (B): ";
    cin >> B;

    cout << "People who like both: " << findBoth(N, A, B) << endl;
    return 0;
}
