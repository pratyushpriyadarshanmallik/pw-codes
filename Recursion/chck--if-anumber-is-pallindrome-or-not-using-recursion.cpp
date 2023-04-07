//Checking a number is pallindrome or not using recursion 
#include<iostream>
using namespace std;
bool pallindrome(int num , int *temp){
    //base case 
    if(num>=0 and num<=9){
        int lastDigitofTemp = *temp%10;
        *temp/=10;
        return (num ==lastDigitofTemp);
    }
    bool result =pallindrome(num/10,temp) and ((num%10)==((*temp)%10));
    *temp /=10;
    return result;
}
int main(){
    int num ;
    cin>>num;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<pallindrome(num,temp);
    return 0;
}
