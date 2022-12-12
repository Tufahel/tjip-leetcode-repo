class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // T C = O(N)
        // M C = O(1)
        int i, candidate = -1, votes = 0;
        for(auto num : nums){
            if(votes == 0){
                candidate = num;
                votes = 1;
            }
            else {
                if(num == candidate) votes++;
                else votes--;
            }
        }
        return candidate;
    }
};