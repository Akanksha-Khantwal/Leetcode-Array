class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ind=2;
        if(n<2)return n;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[ind-2]){
                nums[ind]=nums[i];
                ind++;
            }
           
        }
        return ind;
        
    }
};