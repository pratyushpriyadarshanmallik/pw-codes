// Rotate the given array ‘a’ by k steps, where k is non-negative.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k; cout<<"Enter k: "; cin>>k;
    k=k%n;
    int ansArray[n];
    int j=0;
    for(int i=n-k;i<n;i++){
        ansArray[j++]=arr[i];
    }
    for(int i=0;i<=k;i++){
        ansArray[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansArray[i]<<" ";
    }
    return 0;
}
