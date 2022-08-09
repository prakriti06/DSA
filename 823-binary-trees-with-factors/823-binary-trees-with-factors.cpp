class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        long ans = 0;
        unordered_map<int, long> map;
        for (int num : arr) {
            long ways = 1;
            double lim = sqrt(num);
            for (int j = 0, fA = arr[0]; fA <= lim; fA = arr[++j]) {
                if (num % fA != 0) continue;
                int fB = num / fA;
                if (map.find(fB) != map.end())
                    ways = (ways + map[fA] * map[fB] * (fA == fB ? 1 : 2)) % 1000000007;
            }
            map[num] = ways;
            ans = (ans + ways) % 1000000007;
        }
        return (int)ans;
    }
};