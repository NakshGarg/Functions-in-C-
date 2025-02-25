//Write a function to add two numbers
#include<iostream>
using namespace std;
int sumNum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the first number :- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    cout<<"Sum of two numbers is :- "<<sumNum(a,b);
}