/*Print the maximum of 3 numbers a, b, c taken as input*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the maximum";
        }
        else{
            cout<<c<<" is the maximum";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the maximum ";
        }
        else{
            cout<<c<<" is the maximum";
        }
    }
    return 0;
}
