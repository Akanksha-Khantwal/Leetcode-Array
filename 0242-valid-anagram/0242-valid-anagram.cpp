class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>need(26,0);
        if(s.size()!=t.size())
        return false;
        for(auto c:s){
            need[c-'a']++;
        }
        for(auto c:t){
            need[c-'a']--;
            if(need==vector<int>(26,0)){
                return true;
            }
        }
        return false;
        
    }
};