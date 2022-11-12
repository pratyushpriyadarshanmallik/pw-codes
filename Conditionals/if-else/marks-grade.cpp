#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your marks: " ;
    int n; 
    cin>>n;
    if(n>80){
        cout<<"A" ;
    }
    else if(n>60){
        cout<<"B";
    }
    else if(n>40){
        cout<<"C";
    }
    else{
        cout<<"D";
    }
    return 0;
}
