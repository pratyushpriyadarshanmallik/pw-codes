#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,-1,0,3,6,8,11,12};
    int n=8;
    int x=14;
    bool found=false;
    int left_ptr=0;//0
    int right_ptr=n-1;//7
    while(left_ptr<right_ptr){
        if(arr[left_ptr]+arr[right_ptr]==x){
            found = true;
            break;
        }
        else if(arr[left_ptr]+arr[right_ptr]<x){//3 +11
            left_ptr++;//3
        }
        else{
            right_ptr--;//6
        }
    }
    if(found==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
