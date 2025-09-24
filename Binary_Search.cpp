#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of array"<<endl;
    int size_of_arrar;
    cin>>size_of_arrar;
    int arr[size_of_arrar];
    cout<<"enter the element of array"<<endl;
    for(int j=0;j<size_of_arrar;j++){
        cin>>arr[j];
    }
    cout<<"Your array is:"<<endl;
    for(int k=0;k<size_of_arrar;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    //sort the array
     for(int i=0;i<size_of_arrar-1;i++){
        for(int j=i+1;j<=size_of_arrar-1;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"your sorted array"<<endl;
    //sorted array output
     for(int k=0;k<size_of_arrar;k++){
        cout<<arr[k]<<" ";
    }

    cout<<endl;

    cout<<"enter the target value:"<<endl;
    int target;
    cin>>target;
    
    //Binary search
    int start=0;
    int end=size_of_arrar-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<arr[mid]<<" is present in the array element with index value "<<mid<<endl;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    } 
    return 0;
}


/*
 int start=0;
    int end=size_of_arrar-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<arr[mid]<<" is present in the array element with index value "<<mid<<endl;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    } 
*/
