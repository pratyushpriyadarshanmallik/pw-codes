#include<iostream>
using namespace std;
void printArray(int *arr,int idx ,int n){
    //Base Case
    if(idx==n){
        return;
    }
    //Self-Work
    cout<<arr[idx]<<" ";
    //Assumption
    printArray(arr,idx+1,n);//assuming it works properly -->This prints the remaining array    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    printArray(arr,0,n);
    return 0;
}
