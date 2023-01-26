#include<iostream>
using namespace std;
int arrSum(int arr[],int n,int a ,int b){
    int arr_sum=0;
    for(int i=a;i<=b;i++){
        arr_sum+=arr[i];
    }
    return arr_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int q;
    cout<<"No.of Queries: ";
    cin>>q;
    while(q--){
        int a,b;
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
        cout<<"Sum: "<<arrSum(arr,n,a,b)<<endl;
    }
    return 0;
}
