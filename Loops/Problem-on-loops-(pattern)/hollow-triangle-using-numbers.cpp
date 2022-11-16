/*Given n, print a triangular pattern as shown in the example below.  
Example if n=4  
   1  
  222  
 33333  
4444444  */
#include<iostream>
using  namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(i==1||j==1||i==n||j==n){
                cout<<i;
            }else{
                cout<<" ";
            }
        }
        for(int k=2;k<=i;k++){
            if(i==n||k==i||k==n){
                cout<<i;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
