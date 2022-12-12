class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // T C = O(N)
        // M C = O(1)
        int uniqueNumber = nums[0];
        for(int index = 1; index < nums.size(); index++){
            uniqueNumber = uniqueNumber ^ nums[index];
        }
        return uniqueNumber;
    }
};