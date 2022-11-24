//Count the number of occurrences of a particular element x.  
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cout<<"Size of array: "; cin>>n;
    vector<int> v(n);
    cout<<"Elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x; cout<<"Enter x: "; cin>>x;
    int occurrence = 0;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            occurrence++;
        }
    }
    cout<<"Total Occurrence: "<<occurrence<<endl;
    return 0;
}
