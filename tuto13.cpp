#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int empId;
    char favchar;
    float salary;
} ep;

 union money
{
    /* data */
    int rice;
    char car;
    float pounds;
} ;



int main(){
    ep roshan;
    enum Meal{breakfast, lunch, dinner};
    Meal m1= breakfast;
    cout<<(m1==1);
    // cout<<Breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money  m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;
    // struct employee roshan;
    // struct employee ashutosh;
    // struct employee jayan;
    // roshan.empId = 1;
    // roshan.favchar = 'd';
    // roshan.salary = 120000000;
    // cout<<"The value is "<<roshan.salary<<endl;
    // cout<<"The value is "<<roshan.favchar<<endl;
    // cout<<"The value is "<<roshan.empId<<endl;

    return 0;
}