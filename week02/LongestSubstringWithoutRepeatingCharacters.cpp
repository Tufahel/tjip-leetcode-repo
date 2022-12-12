class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //TC: O(N)
        //MC: O(1)
        vector<int>characterCount(256, 0);
        int left = 0, right = 0, maxLength = 0, duplicateCount = 0;
        int repeationAllowed = 1;

        while(right < s.size()){
            characterCount[s[right]]++;
            if(characterCount[s[right]] > repeationAllowed) duplicateCount++;
            while(duplicateCount > 0){
                characterCount[s[left]]--;
                if(characterCount[s[left]] == repeationAllowed) duplicateCount--;
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        return maxLength;
    }
};