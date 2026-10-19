class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> sols; 
        int start, end;

        for(int i = 0; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            start = i + 1;
            end = nums.size() - 1;
            while(start < end){
                if(start > i + 1 && nums[start] == nums[start - 1]) start++;
                else if(end < nums.size() - 1 && nums[end] == nums[end + 1]) end--;
                else if (nums[start] + nums[end] == -nums[i])  sols.push_back({nums[i],nums[start++],nums[end--]});
                else if (-nums[i] - nums[start] < nums[end]) end--;
                else start++;
            }
        }

        return sols;
    }
};
