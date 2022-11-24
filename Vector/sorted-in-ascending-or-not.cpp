//Check if the given array is sorted or not. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    vector<int> v(n);
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool sorted = true;
    for(int i=0;i<n;i++){
        if(v[i]<=v[i-1]){
            sorted =false;
        }
    }
    if(sorted==0){
        cout<<"Not Sorted";
    }else{
        cout<<"Sorted";
    }
    return 0;
}
