class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> pairwiseSum;
        for(auto &x : nums1){
            for(auto &y : nums2){
                pairwiseSum[x+y]++;
            }
        }
        int tuple_count = 0;
        for(auto &x : nums3){
            for(auto &y : nums4){
                if(pairwiseSum.count(-(x+y))){
                    tuple_count += pairwiseSum[-(x+y)];
                }
            }
        }
        return tuple_count;
    }
};