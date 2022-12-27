//Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter num1: ";
    cin>>a;
    int b;
    cout<<"Enter num2: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"num1 = "<<a<<endl;
    cout<<"num2 = "<<b<<endl;

    return 0;
}
