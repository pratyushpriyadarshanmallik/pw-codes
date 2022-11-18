#include<iostream>
using namespace std;
void add(int a,int b){
    int sum=a+b;
    cout<<sum<<endl;
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    add(a,b);
    return 0;
}
