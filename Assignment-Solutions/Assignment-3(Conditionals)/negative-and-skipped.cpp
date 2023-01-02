/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        cout<<"The number is negative and skipped ";
    }
    else{
        cout<<n;
    }
    return 0;
}
