//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"Even: "<<count<<endl;
    cout<<"Odd: "<<n-count<<endl;
    return 0;
}
