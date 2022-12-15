class Solution {
public:
    //TC: O(N)
    //MC: O(1)
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
    bool isAnagram(string s, string t) {
        return getHash(s) == getHash(t);

    }
};