/*Write a function to print squares of the first 5 natural numbers.*/
#include<iostream>
using namespace std;
void printsquaretilln(int n){
    for(int i=1;i<=n;i++){
        int sq = i*i;
        cout<<sq<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printsquaretilln(n);
    cout<<endl;
    return 0;
}
