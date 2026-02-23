class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        double psum=0;
        for(int i=0;i<k;i++){
            psum+=nums[i];
        }
        double maxsum=psum;
        for(int j=k;j<n;j++){
            psum+=nums[j];
            psum-=nums[j-k];
            maxsum=max(maxsum,psum);
        }
        return maxsum/k;
    }
};