//Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index. Here 1<size<101
#include<iostream>
#include<climits>
using namespace std;
int minimumSum(int arr1[],int arr2[] , int n){
    int minA= INT_MAX;
    int min2A = INT_MAX;
    int minB= INT_MAX;
    int min2B = INT_MAX;
    int indexA=0;
    int indexB=0;
    for(int i=0;i<n;i++){
        if(arr1[i]<minA){
            min2A=minA;
            minA=arr1[i];
            indexA=i;
        }
        else if(arr1[i]<min2A){
            min2A=arr1[i];
        }
        if(arr2[i]<minB){
            min2B=minB;
            minB=arr2[i];
            indexB=i;
        }
        else if(arr2[i]<min2B){
            min2B=arr2[i];
        }
    }
    if(indexA!=indexB){
        return minA+minB;
    }
    return min(min2A+minB,minA+min2B);
}
int main(){
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    int arr1[n];//1 2 3 4 5
    cout<<"Array1: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[n];//5 6 7 8 9  
    cout<<"Array 2: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int minSum= minimumSum(arr1,arr2,n);
    cout<<"Minimum sum: "<<minSum<<endl;
    return 0;
}
