//Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. Where size of vector 1<size<101.
#include<iostream>
#include<vector>
using namespace std;
void Sortbysquare(vector<int> &v){
    vector<int> ans;
    int i =0;
    int j = v.size()-1; 
    while(i<=j){
        if(abs(v[i])<abs(v[j])){
            ans.push_back(v[j]*v[j]);
            j--;
        }else{
            ans.push_back(v[i]*v[i]);
            i++;
        }
    }
    cout<<"Sorted: ";
    for(int i=v.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    Sortbysquare(v);

}
