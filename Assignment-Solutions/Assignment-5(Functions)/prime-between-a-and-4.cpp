//- Given two numbers a and b, write a program to print all the prime numbers present between a and b
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==2){
        return true;
    }
    for (int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a ;
    cin>>a;
    int b;
    cin>>b;
    for(int i=a;i<b;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}
