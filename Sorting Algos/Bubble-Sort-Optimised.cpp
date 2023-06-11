#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &v){
    int n = v.size();
    for(int i = 0;i<n-1;i++){
        bool flag =true;
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag){ //flag is not equal to true
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    BubbleSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
