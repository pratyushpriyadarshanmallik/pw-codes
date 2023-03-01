//Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101
#include<iostream>
#include<climits>
using namespace std;
int findMax(int arr[],int n){
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int findMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max= findMax(arr,n);
    int min =findMin(arr,n);
    cout<<"Sum: "<<max+min<<endl;
    return 0;    
}
