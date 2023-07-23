//Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int i =0;
    int j=n-1;
    while(i<j){
        if(arr[j]-arr[i]==x){
            cout<<"Yes";
            return 0;
        }
        else if(arr[j]-arr[i]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
