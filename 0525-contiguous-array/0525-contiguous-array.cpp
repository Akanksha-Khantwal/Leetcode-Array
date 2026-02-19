class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        m[0]=-1;
        int psum=0;
        int maxlength=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            psum+=nums[i];
            if(m.count(psum)){
                maxlength=max(maxlength,i-m[psum]);
            }
            else
            m[psum]=i;

        }
        return maxlength;
        
    }
};