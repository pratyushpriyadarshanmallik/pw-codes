//Write a Program to display transpose of a matrix entered by the user
#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter number of rows of Array1: ";
    cin>>r1;
    cout<<"Enter number of columns of Array1: ";
    cin>>c1;
    int A[r1][c1];
    cout<<"Enter elements of Array1: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int B[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            B[i][j]=A[j][i];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
