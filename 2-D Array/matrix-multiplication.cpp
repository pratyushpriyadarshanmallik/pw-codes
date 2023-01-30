#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter number of rows in Matrix A:";
    cin>>r1;
    cout<<"Enter number of columns in Matrix A:";
    cin>>c1;
    cout<<"Enter number of rows in Matrix B:";
    cin>>r2;
    cout<<"Enter number of colums in Matrix B:";
    cin>>c2;
    if(c1!=r2){
        cout<<"Your Maatrix multiplication can not be done";
        return 0;
    }
    int A[r1][c1]; //Matrix A
    cout<<"Enter elements of Matrix A: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int B[r2][c2]; //Matrix B
    cout<<"Enter elements of Matrix B: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
