#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int l1,r1,l2,r2;
    cin>>l1;//1
    cin>>r1;//1
    cin>>l2;//2
    cin>>r2;//2
    int sum =0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j]; //23+11=34
        }
    }
    cout<<sum<<endl;
    return 0;
}
