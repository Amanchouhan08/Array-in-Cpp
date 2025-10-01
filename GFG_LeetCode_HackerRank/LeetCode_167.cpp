//Two Sum II - Input Array Is Sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0, end=numbers.size()-1;
        vector<int>a;
        while(start<=end){
           if(numbers[start]+numbers[end]==target){
            a.push_back(start+1);
            a.push_back(end+1);
            return a;
           }
           else{
            if(numbers[start]+numbers[end]<target){
                start++;
            }
            else{
                end--;
            }
           }
        }
       return a;
    }
};
