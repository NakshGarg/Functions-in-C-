#include <iostream>
using namespace std;

int count_bishop_moves(int A, int B) {
    return min(8 - A, 8 - B) + min(8 - A, B - 1) + min(A - 1, 8 - B) + min(A - 1, B - 1);
}

int main() {
    int A, B;
    cout << "Enter Bishop's position (row and column): ";
    cin >> A >> B;
    
    cout << "Total squares Bishop can visit in one move: " << count_bishop_moves(A, B) << endl;
    
    return 0;
}
