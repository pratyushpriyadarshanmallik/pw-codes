#include<iostream>
#include<vector>
using namespace std;
void spiralMatrix(vector<vector<int>> &matrix){
    int top =0; //1 
    int bottom =matrix.size()-1; //1
    int left =0;//1
    int right = matrix[0].size()-1; //1
    int direction=0;
    while(left<=right && top <=bottom){
        if(direction==0){
            for(int col =left;col<=right;col++){
                cout<<matrix[top][col]<<" "; //1 2 3 //5
            }
            top ++;
        }
        else if(direction==1){
            for(int row =top;row<=bottom;row++){
                cout<<matrix[row][right]<<" "; //6 9
            }
            right --;
        }
        else if(direction==2){
            for(int col =right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";//8 7
            }
            bottom --;
        }
        else{
            for(int row = bottom ; row>=top;row--){
                cout<<matrix[row][left]<<" ";//4
            }
            left++;
        }
        direction = (direction+1)%4;//4%4=0
    }
    return ;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    spiralMatrix(matrix);
    return 0; 

}
