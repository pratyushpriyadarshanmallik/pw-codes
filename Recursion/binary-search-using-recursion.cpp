#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int low,int high){
    if(low>high){
        return -1;
    }
    int mid =(low+high)/2;
    if(x==arr[mid]){
        return mid;
    }
    else if(x>arr[mid]){
        binarySearch(arr,x,mid+1,high);
    }
    else{
        binarySearch(arr,x,low,mid-1);
    }
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    int x; cin>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,x,0,n)<<endl;
}
