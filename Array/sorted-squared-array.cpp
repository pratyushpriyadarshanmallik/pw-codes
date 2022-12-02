/*Given an integer array ‘a’ sorted in non-decreasing order, return an array of the squares of each
number sorted in non-decreasing/increasing order. */
#include<iostream>
#include<vector>
using namespace std;
void SortedSquaredArray(vector<int> &v){
    vector<int> ans;
    int left_ptr=0; //2
    int right_ptr=v.size()-1; //2
    while(left_ptr<=right_ptr){
        if((abs(v[left_ptr]))<(abs(v[right_ptr]))){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;            //100 25 16 9 4
        }
    }
    for(int i=ans.size()-1;i>=0;i--){    
        cout<<ans[i]<<" ";  //4 9 16 25 100
    }
    return;
}
int main(){
    int n; cout<<"Size of Array: "; cin>>n; //5  
    vector<int> v;
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        int ele; cin>>ele; //-10 -3 2 4 5
        v.push_back(ele);
    }
    SortedSquaredArray(v);
    return 0;
}
