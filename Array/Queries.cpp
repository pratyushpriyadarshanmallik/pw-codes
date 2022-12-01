//For Q inputs, check if the given number is present in the array or not.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Size of Array: ";//7
    cin>>n;
    vector<int> v(n);
    cout<<"Elements of array: ";//1 2 4 4 5 4 1
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N=1e5+10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    int q;  cout<<"Enter queries: ";  cin>>q;//4
    while(q--){
        int queryelement;
        cin>>queryelement;//1 2 4 6
        cout<<"Frequency: "<<freq[queryelement]<<" ";//2 1 3 0
        cout<<endl;
    }
    return 0;
}
