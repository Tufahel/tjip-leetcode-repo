class Solution {
public:
    //TC: O(N), N = String length
    //MC: O(Size), Size =  7*4 Bytes
    int romanToInt(string s) {
        unordered_map<char, int>symbols_meaning{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for(int i = 0; i < s.length() - 1; i++) sum = (symbols_meaning[s[i]] < symbols_meaning[s[i+1]]) ? sum-=symbols_meaning[s[i]] : sum+=symbols_meaning[s[i]];
        sum += symbols_meaning[s[s.length()-1]];
        return sum;
    }
};