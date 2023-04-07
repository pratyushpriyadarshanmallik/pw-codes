//Sum of natural numbers with alternate signs
#include<iostream>
using namespace std;
int alternateSignSum(int num){
    //Base case 
    if(num ==0){
        return 0;
    }
    if(num%2==0){
        return ((alternateSignSum(num-1))-num);
    }
    else{
        return ((alternateSignSum(num-1))+num);
    }
}
int main(){
    int num =5;
    cout<<alternateSignSum(num)<<endl;
    return 0;
}
