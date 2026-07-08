//There are two types of header files 
//1. System header files: It comers with the complier 
#include<iostream>
// 2. User defined header files: It is written by the programmer
//#include "this.h" --> This will produce an error if this.h is no present in the current file.

using namespace std;

int main(){
    int a = 4 , b = 5;
    cout<<"operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is " <<a+b<<endl;
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a ++ is " <<a++<<endl;
    cout<<"The value of a -- is " <<a--<<endl;
    cout<<"The value of ++ a  is " <<++a<<endl;
    cout<<"The value of -- a is " <<--a<<endl;
    cout<<endl;
    //Assigment Operator --> used assign value to variables
   // int a = 3, b =9;
    // char d = 'b';
    //Comparison operators
    cout<<"Following are the comparsion operators  in C++"<<endl;
    cout<<"The value of a == b is " <<(a==b)<<endl;
    cout<<"The value of a != b is " <<(a!=b)<<endl;
    cout<<"The value of a >= b is " <<(a>=b)<<endl;
    cout<<"The value of a <= b is " <<(a<=b)<<endl;
    cout<<"The value of a < b is " <<(a<b)<<endl;
    cout<<"The value of a > b is " <<(a>b)<<endl;
    cout<<endl;

    // Logical operators
     cout<<"Following are the Logical operators in C++ "<<endl;
    cout<<"The value of this logical and operator ((a==b)&&(a<b)) is " <<((a==b)&&(a<b))<<endl;
    cout<<"The value of this logical and operator ((a!=b)||(a<b)) is " <<((a!=b)||(a<b))<<endl;
    cout<<"The value of this logical and operator (!(a==b)) is " <<(!(a==b))<<endl;

    return 0;

}