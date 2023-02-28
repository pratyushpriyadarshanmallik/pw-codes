//Given two binary numbers, return the greatest of these numbers in decimal format.
#include<iostream>
using namespace std;
int binaryToDecimal(int num){
    int ans=0;
    int power=1;
    while(num>0){
        int lastdigit=num%10;
        ans+=(lastdigit*power);
        power*=2;
        num/=10;
    }
    return ans;
}
int main(){
    int a , b;
    cin>>a;
    cin>>b;
    cout<<"Number 1: "<<binaryToDecimal(a)<<endl;
    cout<<"Number 2: "<<binaryToDecimal(b)<<endl;
    int dec1=binaryToDecimal(a);
    int dec2=binaryToDecimal(b);
    cout<<"Greatest: ";
    if(dec1>dec2){
        cout<<dec1<<endl;
    }
    else{
        cout<<dec2<<endl;
    }
    return 0;
}
