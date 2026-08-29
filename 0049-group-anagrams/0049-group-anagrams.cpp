class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grps;
        for(string s: strs){
            string key = s;
            sort(key.begin(),key.end());
            grps[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& [key,s]: grps){
            result.push_back(s);
        }

        return result;
    }
};