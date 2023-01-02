//Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        n=n*(-1);
        cout<<n<<endl;
    }
    else{
        cout<<n;
    }
    return 0;
}
