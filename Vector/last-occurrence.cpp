//Find the last occurrence of an element x in a given array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; 
    cout<<"Size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: " ;
    cin>>x;
    int occurrence=-1;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            occurrence =i;
        }
    }
    cout<<"Last occurrence: "<<occurrence<<endl;
    return 0;
}
