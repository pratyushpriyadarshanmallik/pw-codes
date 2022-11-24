// Count the number of elements strictly greater than value x. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cout<<"Size of Array: "; cin>>n;
    vector<int> v(n);
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x; cout<<"Enter x: "; cin>>x;
    int count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;
    return 0;
}
