class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for (string x : strs) {
            s += to_string(x.size()) + '#' + x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        for (int i = 0; i < s.size(); i++){
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            strs.push_back(s.substr(j + 1, length));
            i = j + length;
        }
        return strs;
    }
};
