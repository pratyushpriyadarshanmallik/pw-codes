/*- Write a program to calculate the factorial of a number.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0||num==1){
        cout<<1<<endl;
        return 0 ;
    }
    int factorial = 1;
    for(int i=1;i<=num;i++){
        factorial = factorial*i;
    }
    cout<<factorial<<endl;
    return 0;
    
}
