/* Given n, print a rectangular pattern as shown in the example below.  
Example if rows=4,col=6  
121212  
212121  
121212  
212121 */
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    return 0;
}
