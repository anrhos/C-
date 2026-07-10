#include<iostream>
using namespace std;
int main(){
    // Use of break in C++
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2){
            break;
        }
        cout<<i<<endl;
        
    }
        return 0;

    // Use of continue in C++
    for ( int i = 0; i < 40; i++)
    {
        /* code */
        if(i == 2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}