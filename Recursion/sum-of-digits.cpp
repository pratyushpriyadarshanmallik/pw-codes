#include<iostream>
using namespace std;
int fun(int n){
    //Base case
    if(n>=0 and n<=9){
        return n;
    }
    return fun(n/10) + n%10;
}
int main(){
    int num;
    cin>>num;
    cout<<fun(num)<<endl;
    return 0;
}
