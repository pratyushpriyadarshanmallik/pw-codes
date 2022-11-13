#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"Prime number";
            break;
        }else{
            cout<<"Not a prime number ";
            break;
        }
    }
    return 0;
}
