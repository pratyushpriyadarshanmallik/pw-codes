/* Print the sum of the first ‘n’ natural numbers using a while loop where n is the input*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
