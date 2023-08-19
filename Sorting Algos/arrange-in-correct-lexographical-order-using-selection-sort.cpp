#include<iostream>
#include<string.h>
using namespace std;
void selectionSort(char fruit[][60],int n){
    for(int i =0;i<n-1;i++){
        //Finding the minimum element
        int min_idx =i;
        for(int j =i+1;j<n;j++){
            if(strcmp(fruit[min_idx],fruit[j])>0){
                min_idx =j;
            }
        }
        if(min_idx!=i){
            swap(fruit[i],fruit[min_idx]);
        }
    }
}
int main(){
    char fruit[][60] ={"Papaya","Lime","Watermelon","Apple","Mango","Kiwi"};
    int n = sizeof(fruit)/sizeof(fruit[0]);
    selectionSort(fruit,n);
    for(int i =0;i<n;i++){
        cout<<fruit[i]<<" ";
    }
    return 0;
}
