//C++ Program to add two numbers using functions   
#include<iostream>
using namespace std;
int sum(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}
