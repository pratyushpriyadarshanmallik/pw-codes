//Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter num1: ";
    cin>>num1;
    int num2;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Sum = "<<num1+num2<<endl;
    cout<<"Difference = "<<num1-num2<<endl;
    cout<<"Product = "<<num1*num2<<endl;
    cout<<"Division = "<<num1/num2<<endl;
    cout<<"Modulus = "<<num1%num2<<endl;
    return 0;
}
