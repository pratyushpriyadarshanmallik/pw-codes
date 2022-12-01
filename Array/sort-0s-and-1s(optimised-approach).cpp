// Sort an Array consisting of only 0s and 1s.;
#include<iostream>
using namespace std;
void sortZeroresandOnes(int arr[],int n){
    int left =0;
    int right=n-1;
    while(left<right){
        if(arr[left]==1 && arr[right]==0){
            arr[left]=0; arr[right]=1;
            left ++; right--;
        }
        if(arr[left]==0){
            left ++;
        }
        if(arr[right]==1){
            right--;
        }
    }
    return;
}
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    int arr[n];
    cout<<"Elements of array(0s and 1s only): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortZeroresandOnes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
