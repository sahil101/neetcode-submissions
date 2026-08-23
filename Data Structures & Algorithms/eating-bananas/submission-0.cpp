class Solution {
public:
    bool helper(vector<int>& piles, int h, int k) {
        int count_h = 0;
        for (int i = 0 ; i < piles.size(); i++) {
            count_h = count_h + (piles[i] / k) + (piles[i] % k > 0 ? 1 : 0);
            if (count_h > h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;
        while (left <= right) {
            int mid = (left + right) >> 1;

            if (helper(piles, h , mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
