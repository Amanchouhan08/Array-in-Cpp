//Missing in Array from gfg.
class Solution {
  public:
   int missingNum(vector<int>& arr) {
    long long n = arr.size() + 1;  // total numbers should be n
    long long sum = 0;
    for(long long i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    long long total = n * (n + 1) / 2;  // sum of 1..n
    return total - sum;  // missing number
}

};
