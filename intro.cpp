// 1. What is a function?
// A function is a block of code that performs a specific task. Instead of writing the same code again and again, we write a function once and call it whenever needed.

// Why Use Functions?
// ✅ Avoid code repetition
// ✅ Makes code readable
// ✅ Easier to debug
// ✅ Divide big programs into small parts
// ✅ Easier to maintain
// ✅ Reusable code

// 2. Types of Functions
// In C++, functions are mainly of two types:
// Built-in Functions (Predefined functions)
// Already available in C++ (e.g., sqrt(), pow(), abs(), etc.)
// Found in libraries like <cmath>, <iostream>, etc.
// User-Defined Functions
// Functions created by programmers
// You can define your own function for a specific task.

// 3. Function Syntax
// returnType functionName(parameters) {
//     // function body
//     return value; // (optional)
// }
// 🔹 returnType → The type of value the function returns (e.g., int, void, float, etc.)
// 🔹 functionName → The name of the function
// 🔹 parameters → Values passed to the function (optional)
// 🔹 return → Sends back a value (optional)

//write a function to check whether a number is prime
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}