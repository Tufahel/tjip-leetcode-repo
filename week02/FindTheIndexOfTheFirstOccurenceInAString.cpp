class Solution {
public:
    int strStr(string haystack, string needle) {
        // TC: O(N^2)
        // MC: O(N)
        int neddleLength = needle.length();
        for(int index = 0; index < haystack.length(); index++){
            string haystackSubString = haystack.substr(index, neddleLength);
            if(haystackSubString == needle) return index;
        }
        return -1;
    }
};