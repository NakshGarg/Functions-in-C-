//write a function to perform all the basic arithmetic opertions.
//It's a sort of menu driven program.
#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi there!\n";
}

int sum(int a, int b){
    return a+b;
}

int diff(int a, int b){
    if (a>b){
        return a-b;
    }
    else if (a==b){
        return 0;
    }
    else{
        return b-a;
    }
}

int mul(int a, int b){
    return a*b;
}

double divi(int a, int b){
    if(b == 0) {
        cout << "Error: Division by zero is undefined!";
        return 0; // or handle as needed
    }
    return (double)a / b;
}

int main(){
    int a,b,ch;
    fun();
    cout<<"Enter the first number :- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    cout<<"      MENU     \n";
    cout<<"1 FOR ADDITION\n";
    cout<<"2 FOR SUBTRACTION\n";
    cout<<"3 FOR MULTIPLICATION\n";
    cout<<"4 FOR DIVISION\n";
    cout<<"5 TO EXIT\n";
    cout<<"Enter your choice (1-5) :- ";
    cin>>ch;
    if (ch==1){
        cout<<"Sum of numbers :- "<<sum(a,b);
    }
    else if (ch==2){
        cout<<"Difference between numbers :- "<<diff(a,b);
    }
    else if (ch==3){
        cout<<"Product of two numbers :- "<<mul(a,b);
    }
    else if (ch==4){
        cout<<"Quotient on dividing is :- "<<divi(a,b);    
    }
    else{
        cout<<"Thanks for using!";
    }

    return 0;
}