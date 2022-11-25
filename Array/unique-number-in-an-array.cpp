/*Find the unique number in a given array where all the elements are repeated twice with one value
being unique. */
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    int arr[n];
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<arr[i];
        }
    }
    return 0;
}
