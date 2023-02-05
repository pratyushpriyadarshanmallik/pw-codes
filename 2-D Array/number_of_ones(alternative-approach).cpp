#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int leftmostonerow(vector<vector<int>>&vec){
  int leftmostone=-1;
  int leftmostone_index=-1;
  int j=vec[0].size()-1;
  //finding the left most 1 in 0th row
  while(j>=0 && vec[0][j]==1 ){
    leftmostone=j;
    leftmostone_index=0;
    j--;
  }
  //finding the left most one in rest of the array
  for(int i=0;i<vec.size();i++){
    while(j>=0 && vec[i][j]==1){
      leftmostone=j;
      leftmostone_index=i;
      j--;
    }
  }
  return leftmostone_index;
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
  int ans=leftmostonerow(vec);
  cout<<ans<<endl;
  return 0;
}
