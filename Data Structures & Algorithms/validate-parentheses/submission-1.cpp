class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {{'}', '{'}, {']', '['}, {')', '('}};
        for (auto ch : s) {
            if (mp.find(ch) != mp.end()) {
                if (st.empty() || mp[ch] != st.top()) {
                    return false;
                }
                st.pop();
            } else {
                st.push(ch);
            }
        }
        return st.empty() && true;
    }
};