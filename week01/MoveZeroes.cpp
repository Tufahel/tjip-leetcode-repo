class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // T C: O(N)
        // M C: O(N)
        int countZero = 0;
        for (auto num : nums){
            if(num == 0) countZero++;
        }
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j++]=nums[i];
            }
        }
        while(j<nums.size()){
            nums[j++] = 0;
        }
    }
};