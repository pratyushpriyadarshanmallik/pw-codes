//Binary to decimal 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lasdigit=n%10;
        ans+=lasdigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}
