//Find the second largest value in a given array. 
#include<iostream>
#include<climits>
using namespace std;
int secondLast(int arr[],int n){
    int max=INT_MIN;
    int secondMax =INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondMax && arr[i]!= max){
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main(){
    int n; cout<<"Size of Array: "; cin>>n;
    int arr[n]; 
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLast(arr,n);
    return 0;
}
