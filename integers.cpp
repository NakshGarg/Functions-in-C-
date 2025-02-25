// // You have been given 3 integers l, r and k. 
// Find how many numbers between l and r (both inclusive) are divisible by k. 
// You do not need to print these numbers, you just have to find their count.

#include<iostream>
using namespace std;

int countDivisibleNumbers(int l, int r, int k) {
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (i % k == 0) {
            count++;
        }
    }
    return count;
}

int main(){
    int l,r,k;
    cout<<"Enter the 3 integers :- ";
    cin>>l>>r>>k;
    int count = countDivisibleNumbers(l,r,k);
    cout<<count;
    return 0;
}