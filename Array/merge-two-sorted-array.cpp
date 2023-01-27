/* Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.*/
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,7,9,13};
    int arr2[]={4,5,6,10,12,17};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int ansarray[m+n];
    int i=0;//traverse through array 1
    int j=0;//Traverse through array 2
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            ansarray[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ansarray[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        ansarray[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        ansarray[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<m+n;i++){
        cout<<ansarray[i]<<" ";
    }
    return 0;
}                                           
