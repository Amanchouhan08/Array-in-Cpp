//sort the array in ascending order.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,9,5,7,4};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<=4;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }
}

// o/p- 1 4 5 7 9
