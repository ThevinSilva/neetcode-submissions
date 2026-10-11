class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> seen; // diff : index
                                    //
      for(int i = 0; auto& num : nums){
        if(seen.find(num) != seen.end()) return {seen[num], i};
        seen[target - num] = i;
        i++;
      } 

      return {};
    }
};
