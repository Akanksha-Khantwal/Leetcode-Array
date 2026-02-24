class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(auto c:s){
            mp[c]++;
        }
       int n=s.size();
       vector<vector<int>>bucket(n+1);
       for(auto item:mp){
        bucket[item.second].push_back(item.first);
       }
       string t="";
       for(int i=n;i>=1;i--){
       for(char c:bucket[i]){
        t.append(i,c);

       }
       }
       return t; 
        
    }
};