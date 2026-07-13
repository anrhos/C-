#include<iostream>
using namespace std;



// int sum(int a, int b){
//     int c = a+b;
//     return c;
// }
//function prototype 

//type function-name (arguments);
// int sum (int a, int  b); //----->acceptable
//  int sum(int a , b); // ---->  Not Acceptable 
 int sum(int, int); //-----> Acceptable


// int sum(int a, int b);
void g(void);

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter first number"<<endl;
    cin>>num2;
    // num1 and num2 is actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b){
    // Formal Parameters a and b will be taking valuses from actual parameters num1 and num2.
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning";
}