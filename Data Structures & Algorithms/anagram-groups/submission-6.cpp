class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> bucket;
        for (string x : strs) {
            vector<int> freq(26);
            for (char c : x) {
                freq[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += '#' + to_string(freq[i]);
            }
            bucket[key].push_back(x);
        }
        vector<vector<string>> ans;
        for (auto &[key_str, vec_str] : bucket) {
            vector<string> temp;
            for (string s : vec_str) {
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
