//Write a function that returns the largest and the smallest number out of 3 given numbers.The main function should call this function to get the largest and smallest number and print the output.
#include<iostream>
using namespace std;
void LargestandSmallest(int x, int y ,int z, int *largest, int *smallest ){
    *largest = max(x,max(y,z));
    *smallest=min(x,min(y,z));
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int largest; int smallest;
    LargestandSmallest(x,y,z,&largest,&smallest);
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Smallest number: "<<smallest<<endl;
    return 0;
}
