//write a function to swap two numbers using a third variable
#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout<<"Enter the value of a :- ";
    cin>>a;
    cout<<"Enter the value of b :- ";
    cin>>b;
    cout<<"Value of a before swapping :- "<<a<<endl;
    cout<<"Value of b before swapping :- "<<b<<endl;
    swap(a,b);
    cout<<"Value of a after swapping :- "<<a<<endl;
    cout<<"Value of b after swapping :- "<<b<<endl;
    return 0;
}