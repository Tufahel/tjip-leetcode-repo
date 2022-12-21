class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // TC: O(N), N = String Length;
        // MC: O(1), 520 bits = 65 bytes
        int hashValueforS[260] = { 0 }, hashValueforT[260] = { 0 };
        for(int index = 0; index < s.length(); index++){
            int m = int(s[index]), n = int(t[index]);
            if((hashValueforS[m] != 0 && hashValueforS[m] != n) || (hashValueforT[n] != 0 && hashValueforT[n] != m)) return false;
            hashValueforS[m] = n;
            hashValueforT[n] = m;
        }
        return true;
    }
};