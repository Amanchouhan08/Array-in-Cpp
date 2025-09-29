//Find First and Last Position of Element in Sorted Array.

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1, last=-1;
        int mid,start=0;
        int end=nums.size()-1;

        //first position
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        //second position
        start=0,end=nums.size()-1;
            while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        vector<int>a(2);
        a[0]=first;
        a[1]=last;

        return a;
    }
};
