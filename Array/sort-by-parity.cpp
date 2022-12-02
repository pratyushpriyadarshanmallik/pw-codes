/*Given an array of integers ‘a’, move all the even integers at the beginning of the array followed by
all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies
the condition.*/
#include<iostream>
using namespace std;
void sortbyParity(int arr[], int n){
    int left=0;
    int right =n-1;
    while(left<right){
        if((arr[left])%2!=0 && arr[right]%2==0){
            int temp =arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++; right--;
        }
        if(arr[left]%2==0){
            left++;
        }
        if(arr[right]%2!=0){
            right--;
        }
    }
    return;
}  
int main(){
    int n; cout<<"Size of Array: "; cin>>n;
    int arr[n];
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortbyParity(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
