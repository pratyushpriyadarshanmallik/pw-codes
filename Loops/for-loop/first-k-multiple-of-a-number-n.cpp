 //Print the first k multiples of a number n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=1;i<=k;i++){
        cout<<n*i<<" ";
    }
    return 0;
}
