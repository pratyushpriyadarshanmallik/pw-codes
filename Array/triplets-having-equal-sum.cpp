//Count the number of triplets whose sum is equal to a given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Soze of Array: ";
    cin>>n;
    int arr[n];//Array Declaration 
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x; cout<<"Enter X: "; cin>>x;
    int triplets =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    triplets++;
                }
            }
        }
    }
    cout<<"Number of triplets: "<<triplets;
    return 0;
}
