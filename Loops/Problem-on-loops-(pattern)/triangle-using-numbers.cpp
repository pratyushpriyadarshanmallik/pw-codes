/*Given n, print a triangular pattern as shown in the example below.  
Example if n=4  
1  
12  
123  
1234  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
