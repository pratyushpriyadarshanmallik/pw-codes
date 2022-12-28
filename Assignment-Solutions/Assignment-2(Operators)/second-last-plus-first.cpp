/*Write a program to calculate the sum of the first and the second last digit of a 5 digit number*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter 5 digit number: ";
    cin>>n;
    n=n/10;
    int secondlastdigit=n%10;
    int i=4;
    while(i>1){
        n=n/10;
        i--;
    }
    int firstdigit=n;
    int ans=secondlastdigit+firstdigit;
    cout<<"secondlastdigit + firstdigit = "<<ans<<endl;
    return 0;
}
