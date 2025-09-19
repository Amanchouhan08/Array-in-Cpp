//Searching in an Array problem from gfg
class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        int s=arr.size();
        for(int i=0;i<=s;i++){
            if(arr[i]==k){
            return i+1;
            }
        }
        return -1;
    }
};
