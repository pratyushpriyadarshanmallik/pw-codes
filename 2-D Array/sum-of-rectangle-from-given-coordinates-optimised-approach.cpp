#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>> matrix,int l1 , int l2,int r1, int r2){
    
    int n= matrix.size(); int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=1 ; j<m;j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    int sum=0; 
    for(int i=l1;i<=l2;i++){
        if(r1!=0){
            sum+=(matrix[i][r2]-matrix[i][r1-1]);
        }
        else{
            sum+=(matrix[i][r2]);
        }
    }
    return sum ;
}
int main(){
    int n , m;
    cin>>n;//3//4
    cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1 , r1 , l2 , r2;
    cin>>l1;// 0
    cin>>l2;//0
    cin>>r1;//1
    cin>>r2;//1
    cout<<rectangleSum(matrix,l1,l2,r1,r2);
    return 0;
}
