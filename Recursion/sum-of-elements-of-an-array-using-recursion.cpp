//Sum using recursion
#include<iostream>
using namespace std;
int sum(int *arr,int idx , int n){
    if(idx==n-1){
        return arr[idx];
    }
    return arr[idx]+sum(arr,idx+1,n);
}
int main(){
    int n=5;
    int arr[n]={6,2,9,8,3};
    cout<<sum(arr,0,n)<<endl;
    return 0;
}
