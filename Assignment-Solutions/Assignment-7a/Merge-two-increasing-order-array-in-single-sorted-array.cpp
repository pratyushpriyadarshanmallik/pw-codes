// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter Size of Array1: ";
    cin>>m; 
    vector<int>v1(m);
    cout<<"Enter Array1: ";
    for(int i=0;i<m;i++){
        cin>>v1[i]; 
    }
    int n;
    cout<<"Enter Size of Array2: ";
    cin>>n; 
    vector<int>v2(n); 
    cout<<"Enter Array 2: ";
    for(int i=0;i<n;i++){
        cin>>v2[i]; 
    }
    vector<int>v(m+n);
    int i=0; 
    int j = 0; 
    int k = 0; 
    while(i<=m-1 && j<=n-1){ 
        if(v1[i]<v2[j]){ 
            v[k]=v1[i]; 
            i++;
            k++;
        }
        else{
            v[k]=v2[j];
            j++;
            k++;
        }
    }
    while(j<=n-1){ 
        v[k]=v2[j]; 
        j++;
        k++;
    }
    while(i<=m-1){
        v[k]=v2[i];
        i++;
        k++;
    }
    cout<<"New array: ";
    for(int i=0;i<(m+n);i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
