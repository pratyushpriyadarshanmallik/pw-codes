//Find the second largest value in a given array. 
#include<iostream>
#include<climits>
using namespace std;
int largestnumberIndex(int arr[],int n){
    int max =INT_MIN;
    int maxIndex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;

}
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    int arr[n];
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int indexoflast=largestnumberIndex(arr,n);
    arr[indexoflast]=-1;
    int indexofSecondlargest=largestnumberIndex(arr,n);
    cout<<"Second largest number is: "<<arr[indexofSecondlargest];
    return 0;
}
