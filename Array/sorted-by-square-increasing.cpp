#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result[n];
    int i=0;int j=n-1; int k=n-1;
    while(i<=j&&k>=0){
        if(abs(arr[i])>abs(arr[j])){
            result[k]=(arr[i]*arr[i]);
            k--;
            i++;
        }
        else{
            result[k]=arr[j]*arr[j];
            k--;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }    
    return 0;
}
