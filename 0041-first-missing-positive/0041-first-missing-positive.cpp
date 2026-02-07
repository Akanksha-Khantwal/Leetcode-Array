class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=1;
        int end=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]>0){
                if(nums[i]==start)
                start++;
                else
                return start;
            }
            continue;
           
        }
        return end+1;;
        
    }
};