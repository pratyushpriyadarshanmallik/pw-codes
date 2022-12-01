// Sort an Array consisting of only 0s and 1s.;
#include<iostream>
using namespace std;
void sortZeroesandOnes(int arr[],int n){
    int zeroescount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroescount++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<zeroescount){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Elements of array(0 and 1 only): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortZeroesandOnes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
