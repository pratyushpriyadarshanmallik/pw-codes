//Reverse the digits of a number.  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Reverse=0;
    while(n>0){
        int lastdigit =n%10;
        Reverse=(Reverse*10)+lastdigit;
        n=n/10;
    }
    cout<<Reverse;
    return 0;
}
