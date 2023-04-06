//Max element in an array using recursion 
#include<iostream>
using namespace std;
int maxinArray(int *arr, int idx , int n){
    if(idx == n-1){
        return arr[idx];
    }
    return max(arr[idx],maxinArray(arr,idx+1,n));
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxinArray(arr,0,n);
    return 0;
}
