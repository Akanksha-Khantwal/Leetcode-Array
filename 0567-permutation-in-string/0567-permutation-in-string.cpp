class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>need(26,0);
        int left=0;
        for(auto c:s1){
            need[c-'a']++;
        }
        for(int right=0;right<s2.size();right++){
            need[s2[right]-'a']--;
            if(right-left+1>s1.size()){
                need[s2[left]-'a']++;
                left++;

            }
        if(need==vector<int>(26,0))
        return true;

        }
       
        return false;
        
    }
};