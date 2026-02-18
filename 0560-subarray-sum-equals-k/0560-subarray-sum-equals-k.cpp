class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        freq[0]=1;
        int psum=0;
        int count=0;
       for(int x:nums){
        psum+=x;

        if(freq.count(psum-k)){
            count+=freq[psum-k];
        }
        freq[psum]++;
       }
       return count;
        
    }
};