class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        vector<int>need(26,0);
        if(p.size()>s.size()){
            return result;
        }
        int left=0;
        for(auto c:p){
            need[c-'a']++;
        }
        for(int right=0;right<s.size();right++){
            need[s[right]-'a']--;
            if(right-left+1>p.size()){
                need[s[left]-'a']++;
                left++;

            }
            if(need==vector<int>(26,0)){
                result.push_back(left);
            }
        }
        return result;
        
    }
};