#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    vector <int> v(n);
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x; cout<<"Enter x: "; cin>>x;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<"Last Occurrence: "<<i;
            break;
        }else{
            cout<<"Last Occurrence: -1";
        }
    }
    return 0;
}
