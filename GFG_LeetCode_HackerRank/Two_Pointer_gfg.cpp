//Segregate 0s and 1s
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        //sort(arr.begin(),arr.end()); this line solve this problem in one line.
        int start=0,end=arr.size()-1;
        while(start<=end){
            if(arr[start]==1 && arr[end]==0){
                swap(arr[start],arr[end]);
            }
            else{
                if(arr[start]==0){
                  start++;
                }
                else{
                   end--;
                }
            }
        }
    }
};
