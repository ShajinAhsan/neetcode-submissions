class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto [num, f] : freq) {
            bucket[f].push_back(num);
        }
        vector<int> res;
        for (int i = nums.size(); i >= 1; i--) {
            for (int x : bucket[i]) {
                res.push_back(x);
                if (res.size() == k) return res;
            }
        }
        return res;
    }
};
