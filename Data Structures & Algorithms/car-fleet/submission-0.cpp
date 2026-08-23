class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       int n = position.size();
        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++)
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]});
        sort(cars.begin(), cars.end());

        int t = n, ans = 0;
        while (--t > 0) {
            if (cars[t].second < cars[t - 1].second)
                ans++;
            else
                cars[t - 1] = cars[t];
        }
        return ans + (t == 0 ? 1 : 0); 
    }
};
