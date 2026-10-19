class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr; // {value, original index}
        for (int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end());

        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            int sum = arr[start].first + arr[end].first;
            if (sum == target) {
                int a = arr[start].second, b = arr[end].second;
                return {min(a, b), max(a, b)};
            }
            else if (sum > target) end--;
            else start++;
        }

        return {};
    }
};