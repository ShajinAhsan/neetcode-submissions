class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (string x : strs) {
            vector<int> freq(26);
            for (int i = 0; i < x.size(); i++) {
                freq[x[i] - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += '#' + to_string(freq[i]);
            }
            res[key].push_back(x);
        }
        vector<vector<string>> ans;
        
        for (auto &[key, val] : res) {
            vector<string> temp;
            for (string s : val) {
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;

    }
};
