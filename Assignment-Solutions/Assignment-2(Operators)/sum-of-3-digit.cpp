//Write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter 3 digit number: ";
    cin>>n;
    int lastdigit = n%10;
    n=n/10;
    int seconddigit=n%10;
    n=n/10;
    int firstdigit=n;
    int sum = firstdigit+seconddigit+lastdigit;
    cout<<firstdigit<<"+"<<seconddigit<<"+"<<lastdigit<<"="<<sum;
    return 0;
}
