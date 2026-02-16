class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int maxlength=0;
        int count=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                count++;
            }
           while(count>k){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            maxlength=max(maxlength,r-left+1);
        }
        return maxlength;
        
    }
};