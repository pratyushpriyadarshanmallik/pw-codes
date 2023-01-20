//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int odd_count =0;
    int even_count=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Odd Numbers = "<<odd_count<<endl;
    cout<<"Even Numbers = "<<even_count<<endl;
    return 0;
}
