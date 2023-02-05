#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxones(vector<vector<int>>&vec){
  int maxones=INT_MIN;
  int maxonesIndex=-1;
  int columns =vec[0].size();
  for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[0].size();j++){
      if(vec[i][j]==1){
        int numberofOnes=columns-j;
        if(numberofOnes>maxones){
          maxones=numberofOnes;
          maxonesIndex=i;
        }
        break;
      }
    }
  }
  return maxonesIndex;
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>>vec(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>vec[i][j];
    }
  }
  int ans=maxones(vec);
  cout<<ans<<endl;
  return 0;
}
