//852. Peak Index in a Mountain Array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid, start=0, end=arr.size()-1;
        while(start<=end){
           mid=end+(start-end)/2;
           if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
             return mid;
           }
           else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
            start=mid+1;
           }
           else{
            end=mid-1;
           }
        }
        return 0;
    }
};
