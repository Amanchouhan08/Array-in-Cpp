//find the smallest and largest value in array.
#include<iostream>;
using namespace std;
int main(){
 int arr[5]={5,8,7,1,3};
 int small_value=INT_MAX;
 int Largest_value=INT_MIN;
 for(int i=0;i<5;i++){
    if(arr[i]<small_value){
        small_value=arr[i];
    }
 }
 for(int j=0;j<5;j++){
    if(arr[j]>Largest_value){
        Largest_value=arr[j];
    }
 }
 cout<<small_value<<endl;
 cout<<Largest_value;
 return 0;
}
