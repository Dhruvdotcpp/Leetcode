class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> hash;
        for(char c:s) hash[c]++;
        for(char c:t) hash[c]--;

        for(auto& [c,f] : hash){
            if(f!=0) return false;
        }
        return true;
    }
};