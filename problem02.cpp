//return target index and the target is not present then print -1.
#include<iostream>;
using namespace std;
int main(){
 int index=-1;
 int target_index=3;
 int arr[5]={1,5,41,11,3};
for(int i=0;i<5;i++){
  if(arr[i]==target_index){
    index=i;
    break;
  }
}
cout<<index;
 return 0;
}
