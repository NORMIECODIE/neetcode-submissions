class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> check;
        vector<vector<string>> result;

        for(auto s : strs)
        {
            auto key = s;
            sort(key.begin(), key.end());
            check[key].push_back(s);
        }

        for(auto pair : check)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};