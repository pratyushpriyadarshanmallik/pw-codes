#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}
