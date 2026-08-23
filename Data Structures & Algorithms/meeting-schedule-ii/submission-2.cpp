/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        auto cmp = [&](Interval &a, Interval &b) {
            return a.start < b.start;
        };
        sort(intervals.begin(), intervals.end(), cmp);
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (const auto& interval : intervals){
            if (!minHeap.empty() && minHeap.top() <= interval.start) {
                minHeap.pop();
            }
            minHeap.push(interval.end);
        }

        return minHeap.size();


    }
};
