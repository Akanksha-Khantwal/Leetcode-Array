class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int psum=0;
        int count=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int num:nums){
            psum+=num;
            if(m.count(psum-goal)){
                count+=m[psum-goal];
            }
            m[psum]++;
        }
        return count;
    }
};