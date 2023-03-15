//1. Write a program to print the address of an integer variable whose value is input by the user.
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Entered Number: "<<n<<endl;
    int *ptr=&n;
    cout<<"Address of the enterd number : "<<ptr<<endl;
    return 0;
}
