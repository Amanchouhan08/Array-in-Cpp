//we assign value in array and print.
#include<iostream>;
using namespace std;
int main(){
 //int arr[5]={1,2,3,4,5}; //direct assign 
 // int arr[5]={0};        //{0,0,0,0,0} only vald for 0

//take input by user
int arr[5];
for(int i=0;i<5;i++){
    cin>>arr[i];
}
//print array
for(int j=0;j<5;j++){
    cout<<arr[j]<<" ";
}

 return 0;
}
