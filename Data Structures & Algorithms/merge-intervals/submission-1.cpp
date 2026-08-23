class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
     vector<vector<int>> result;
        int n = intervals.size();
        int i = 1;
        vector<int> newInterval = {intervals[0][0], intervals[0][1]};
        while (i < n) {
            if (newInterval[1] < intervals[i][0]) {
                result.push_back(newInterval);
                newInterval = intervals[i];
            } else {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
            i++;
        }

    result.push_back(newInterval);
    return result; 
    }
};
