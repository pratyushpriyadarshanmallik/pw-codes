//Find the total number of pairs in the array whose sum is equal to the given value x. 
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    int arr[n];
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x; cout<<"Enter x: "; cin>>x;
    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                pairs++;
            }
        }
    }
    cout<<"Total number of pairs: "<<pairs;
    return 0;
}
