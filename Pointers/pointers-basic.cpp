#include<iostream>
using namespace std;
int main(){
    int x = 10;
    float y =28.7;
    int *ptr; //Pointer with garbage value
    cout<<ptr<<" ";
    int *ptr1 = &x;//Integer Pointer 
    cout<<ptr1<<" ";
    float *ptr2= &y;//Float Pointer
    cout<<ptr2<<endl;

    //Declaring the pointer and reassigning it 
    int *pointer; // Only declaration 
    cout<<pointer<<" ";
    pointer = &x; //Re assigning the pointer 
    cout<<pointer<<" ";
    //Dereferencing - operator
    int z =10;
    int *ptr3 = &z;
    cout<<"Address of the pointer: "<<ptr3<<endl;
    cout<<"Value inside pointer:"<<*ptr3<<endl;
    z = 23;
    cout<<"Address of the pointer: "<<ptr3<<endl;
    cout<<"Value inside pointer after dereferencing:"<<*ptr3<<endl;

    //Updating value with pointer
    *ptr3=50;
    cout<<"New value of z: "<<z<<endl;
    cout<<"New value pointed by ptr3: "<<*ptr3<<endl;

    //Storing the value of a pointer inside another variable
    int val=*ptr3;
    cout<<"Val: "<<val<<endl;
    return 0;
}
