//Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int ans =0;
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]==x){
            ans++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;
}
