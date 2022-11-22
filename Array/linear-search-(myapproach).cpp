/*Search if the given element is present in the array or not and find the index. If not present then return
the index as -1. (Linear Search)*/ 
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
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;

}
