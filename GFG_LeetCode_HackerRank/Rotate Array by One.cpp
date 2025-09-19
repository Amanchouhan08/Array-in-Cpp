//Rotate Array by One from gfg
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int size=arr.size();
        int temp=arr[size-1];
        for(int i=size-2;i>=0;i--){
            arr[i+1]=arr[i];
    }
    arr[0]=temp;
    }
};
