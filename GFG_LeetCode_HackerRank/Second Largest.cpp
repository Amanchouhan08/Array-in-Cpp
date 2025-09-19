//Second Largest from gfg
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int size=arr.size();
        int temp=INT_MIN;
        int ans=-1;
        for(int i=0;i<size;i++){
            if(arr[i]>temp){
                temp=arr[i];
            }
        }
        for(int j=0;j<size;j++){
            if(arr[j]!=temp&&ans<arr[j]){
                ans=arr[j];
            }
        }
        return ans;
    }
};
