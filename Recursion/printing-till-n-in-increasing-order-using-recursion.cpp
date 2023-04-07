//Printing till n using recursion 
#include<iostream>
using namespace std;
void printTillNum(int num){
    if(num<1){
        return;
    }
    printTillNum(num-1);
    cout<<num<<" ";
}
int main(){
    printTillNum(5);
    return 0;
}
