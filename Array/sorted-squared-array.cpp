/*Given an integer array ‘a’ sorted in non-decreasing order, return an array of the squares of each
number sorted in non-decreasing/increasing order. */
#include<iostream>
#include<vector>
using namespace std;
void squareSort(vector <int> &v){//-10 -3 2 3 4 6
    vector<int> ans; //100 36 16 9 9 4 
    int left_ptr=0; // 1
    int right_ptr=v.size()-1;//2
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])>abs(v[right_ptr])){
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        else{
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
    }
    for(int i=ans.size()-1;i>0;i--){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    squareSort(v);
    return 0;
}
