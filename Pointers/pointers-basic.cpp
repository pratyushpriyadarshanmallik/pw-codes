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
    cout<<ptr2<<" ";
    return 0;
}
