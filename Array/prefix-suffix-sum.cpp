/*Check if we can partition an input array into two subarrays with equal sum> More formally, check
that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array>*/
#include<iostream>
#include<vector>
using namespace std;
bool prefixSuffixSum(vector<int> &v){
    int total_sum=0; 
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];//6
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];//3
        int suffix_sum=total_sum-prefix_sum;//3
        if(prefix_sum==suffix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    int n; cin>>n;//5
    vector <int> v;//1 2 4 -1 0
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<prefixSuffixSum(v)<<endl;
    return 0;
}
