class Solution {
public:
    // TC : O(N*M), N = strs.length, M = strs[i].length;
    // MC : Depends on Map and Hashvalue. (Confused)
    static const int BASE = 997;
    static const long long MOD = 101103107109113LL;
    long long getHash(string &s){
        long long hash = 1;
        for(auto character : s){
            hash *= (BASE + character);
            if(hash >= MOD) hash %= MOD;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< long long, vector<string> > hashMap;
        for(auto string : strs){
            hashMap[getHash(string)].push_back(string);
        }
        vector<vector<string>> groupStrings;
        for(auto anagram : hashMap) groupStrings.push_back(anagram.second);
        return groupStrings;
    };
};