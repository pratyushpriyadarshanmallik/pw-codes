//Find the sum of digits in a given number n.  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n%10;//By doing n%10 we will get the last digit number
        n=n/10;
    }
    cout<<sum;
    return 0;
}
