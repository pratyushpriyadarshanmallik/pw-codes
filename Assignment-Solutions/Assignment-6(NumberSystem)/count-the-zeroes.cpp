//Given a natural number, find the number of 0’s in the binary representation of that number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int power=1;
    while(n>0){
        int paritydigit=n%2;
        if(paritydigit==0){
            count++;
        }
        n/=2;
    }
    cout<<count;
    return 0;
}
