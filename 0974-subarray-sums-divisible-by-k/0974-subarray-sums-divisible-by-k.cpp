class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int psum=0;
        m[0]=1;
        int rem;
        int tsum=0;
        for(int num :nums){
            psum+=num;
            rem=psum%k;
            if(rem<0){
                rem=rem+k;
            }
            if(m.count(rem)){
            tsum+=m[rem];
            m[rem]++;
            }
            else
            m[rem]=1;
        }
        return tsum;
        
    }
};