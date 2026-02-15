class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int f=0;f<n;f++){
            if(nums[f]%2==0){
                swap(nums[s],nums[f]);
                s++;
            }
        }
        return nums;
        
    }
};