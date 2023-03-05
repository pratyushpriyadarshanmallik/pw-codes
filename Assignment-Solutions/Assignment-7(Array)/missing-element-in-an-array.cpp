//Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.
#include<iostream>
using namespace std;
int missingElement(int arr[],int n){
    int totalsum=(n*(n+1))/2;
    int arrSum=0;
    for(int i=0;i<n;i++){
        arrSum+=arr[i];
    }
    int result=totalsum-arrSum;
    return result;
}
int main(){
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num = missingElement(arr,n);
    cout<<"Missing element: "<<num<<endl;
    return 0;
}
