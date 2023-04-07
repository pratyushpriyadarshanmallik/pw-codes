//Printing k multiples of n using recursion
#include<iostream>
using namespace std;
void printMultiples(int num , int k){
    if(k==0){
        return; 
    }
    printMultiples(num,k-1);
    cout<<(k*num)<<" ";
}
int main(){
    int num =3;
    int k = 5;
    printMultiples(num,k);
    return 0;
}
