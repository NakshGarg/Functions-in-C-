//wap to convert lowercase into uppercase

#include <iostream>

using namespace std;

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    cout << "Uppercase: " << toUpperCase(ch) << endl;
    
    return 0;
}
