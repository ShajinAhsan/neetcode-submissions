class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        nums.clear();
        nums.assign(st.begin(), st.end());
        return st.size();
    }
};