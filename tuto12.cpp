#include<iostream>

using namespace std;

int main(){
    //Array example
    int marks[4] = {23, 40, 50, 99};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 2478;
    mathMarks[2] = 2578;
    mathMarks[3] = 226;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //you can change the vlaue of an array
     marks[2] =455;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++){
        cout<<"The value of marks "<<i<< " is "<<marks[i]<<endl;
    }

    // Quick Quiz: do the same using while and do-while loops?

    //Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The vlaue of *p is "<<*p<<endl;
    cout<<"The vlaue of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The vlaue of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The vlaue of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}
