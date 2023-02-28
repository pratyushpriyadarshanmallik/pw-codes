//Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
#include<iostream>
using namespace std;
int binarytoDecimal(int sum){
    int ans=0;//111
    int power=1;//1000
    while(sum>0){
        int paritydigit=sum%2;//1
        ans+=(paritydigit*power);//1+(1*1000)=1111
        power*=10;//100*10=10000
        sum/=2;//0
    }
    return ans;
}
int main(){
    int sum =0;
    for(int i=1;i<6;i++){
        sum+=i; //1+2+3+4+5=15
    }
    cout<<binarytoDecimal(sum)<<endl;
    return 0;
}
