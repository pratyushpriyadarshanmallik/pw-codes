//Calculate the sum of all the elements in the given array. 
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum<<" ";
    return 0;
}
