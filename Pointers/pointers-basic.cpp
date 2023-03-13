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
    return 0;
}
