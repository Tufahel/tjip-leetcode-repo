class Solution {
public:
    bool isAnagram(string s, string t) {
        //TC: O(N)
        //MC: O(1)
        if (s.size() != t.size()) return false;
        vector<int> characterCount(26, 0);
        for(auto character : s){
            characterCount[character - 'a']++;
        }
        for(auto character : t){
            characterCount[character - 'a']--;
        }
        for(int index = 0; index < 26; index++){
            if (characterCount[index] != 0) return false;
        }
        return true;

    }
};