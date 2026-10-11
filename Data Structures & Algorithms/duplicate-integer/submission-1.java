class Solution {
    public boolean hasDuplicate(int[] nums) {
        int i = 0;
        while(i < nums.length){
            int current = nums[i];
            // a number should only appear once more than once means duplicate
            int obs = 0;
            for(int j = 0; j < nums.length; j++){
                if (current == nums[j]) obs++;
                if (obs > 1) return true;
            }
            System.out.println(current);
            i++;
        }

        return false;
    }
}