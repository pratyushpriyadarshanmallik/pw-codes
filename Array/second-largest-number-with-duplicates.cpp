//Find the second largest value in a given array. 
#include<iostream>
#include<climits>
using namespace std;
int lasteElementIndex(int arr[],int n){
    int max=INT_MIN;
    int maxIndex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    int arr[n]; 
    cout<<"Element of Array; ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int indexofLast = lasteElementIndex(arr,n);
    int largestElement = arr[indexofLast];
    for(int i=0;i<n;i++){
        if(arr[i]==largestElement){
            arr[i]=-1;
        }
    }
    int indexofSecondlast =lasteElementIndex(arr,n);
    cout<<"Second largest element is: "<<arr[indexofSecondlast];
    return 0;
}
