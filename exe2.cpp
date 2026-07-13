#include<iostream>
using namespace std;

int main(){
    int marks[4] = {33, 40, 50, 93};
    int i = 0;
    while ( i < 4)
    {
        cout<<"The value of marks "<<i<< " is "<<marks[i]<<endl;
        i++;
    }
    
    return 0;
    
    do{
        cout<<"The value of marks "<<i<< " is "<<marks[i]<<endl;
        i++;
    }
    while( i < 4);
    return 0;
}