#include<iostream>
using namespace std;
int power(int p , int q){
    //Base Case
    if(q==0){
        return 1;
    }
    if(q%2==0){
        int ans=power(p,q/2);
        return ans*ans;
    }
    else{
        int ans=power(p,(q-1)/2);
        return p*ans*ans;
    }
}
int main(){
    int p,q;
    cin>>p>>q;
    cout<<power(p,q)<<endl;
    return 0;
}
