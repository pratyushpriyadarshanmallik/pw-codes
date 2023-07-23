//Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;
    int i=0;
    int j =n-1;
    while(i<j){
        if(v[i]+v[j]==x){
            cout<<"Yes"<<endl;
            return 0;
        }
        else if(v[i]+v[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"No"<<endl;
}
