#include<iostream>

using namespace std;

int main(){
    /*Loops in C++
    There are three Types of loops in C++;
    1. for loop
    2. while loop
    3. do-while loop
    */
   /*For loop in C++*/
   // Syntax of for loop
   // for(initialization;condition;incrementation)
   // {
    // loop body(C++ code);
   //}
//     int i = 1;
//     for( i = 0; i < 4; i++){
//     cout<<i<<endl;
//    }
    //return 0;
    // Example of infinite for loop
    // int i = 1;
    // for( i = 0; 34<= 40; i++){
    //     cout<<i<<endl;
    // }
    // return 0;
   /*while loop in C++*/
    //while(condition):
    // {
    //C++ statements;
    // }
    // printing 1 to 40 using the while loop
    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }
    // return 0;
    // Example of infinite while loop
    // int i = 1;
    // while(true){
    //     cout<<i<<endl;
    //      i++;
    // }
    // return 0;
    /*do-while loop */
    // Printing 1 to 40 using do-while loop
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(false);

    return 0;
}
