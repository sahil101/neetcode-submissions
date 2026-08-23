class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int max_length = 0;

        for (auto num : st) {
            if (st.count(num - 1) <= 0) {
                int count  = 1;
                int next_num = num + 1;
                while (st.count(next_num) >= 1) {
                    count++;
                    next_num++;
                }

                max_length = max(max_length, count);
            } 
        }
        return max_length;
    }
};
