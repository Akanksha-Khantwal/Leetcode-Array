class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int longest=0;
        
        for(int num:st){
            if(st.count(num-1)==0){
                int currentnum=num;
                int currlong=1;
            while(st.count(currentnum +1)){
                currentnum+=1;
                currlong+=1;
            }
            longest=max(longest,currlong);
            }

        }
        return longest;
    }
};