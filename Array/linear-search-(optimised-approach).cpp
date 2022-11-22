/*Search if the given element is present in the array or not and find the index. If not present then return
the index as -1. (Linear Search)*/ 
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key; cin>>key;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
