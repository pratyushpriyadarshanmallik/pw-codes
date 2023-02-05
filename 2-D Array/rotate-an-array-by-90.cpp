#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<vector<int>> &vec){
  //transpose
  for(int i=0;i<vec.size();i++){
    for(int j=0;j<i;j++){ //becuse we wanted to swap elements above the matrix 
      swap(vec[i][j],vec[j][i]);
    }
  }
  //rotate rows
  for(int i=0;i<vec.size();i++){
    swap(vec[i][0],vec[i][vec.size()-1]);
  }
  return;
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>> vec(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>vec[i][j];
    }
  }
  rotateArray(vec);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
