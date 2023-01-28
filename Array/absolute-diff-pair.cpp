#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n]; // 1 6 8 12 15 19
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x; cin>>x;
    bool found=false;
    int left_ptr=0;
    int right_ptr=1;//2
    while(left_ptr<n && right_ptr<n){
        if(abs(arr[left_ptr]-arr[right_ptr])==x){
            found=true;
            break;
        }
        else if(abs(arr[left_ptr]-arr[right_ptr])>x){
            left_ptr++;
        }
        else{
            right_ptr++;
        }
    }
    if(found==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
