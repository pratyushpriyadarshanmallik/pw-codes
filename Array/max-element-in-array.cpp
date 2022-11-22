//Find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
