class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int left=0;
        int maxlength=0;
        for(int r=0;r<fruits.size();r++){
            mp[fruits[r]]++; 

            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);

                }
                left++;

            }
         maxlength=max(maxlength,r-left+1);
        }
        return  maxlength;
        
    }
};