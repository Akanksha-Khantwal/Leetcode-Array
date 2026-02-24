class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<int>result;
        int n=nums.size();
        for(auto a:mp){
            if(a.second>n/3){
                result.push_back(a.first);
            }
        }
        return result;
        
    }
};