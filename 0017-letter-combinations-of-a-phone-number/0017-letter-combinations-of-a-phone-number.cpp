class Solution {
public:
    vector<string>ans;
   void solve(int i,string&digits,unordered_map<char,string>m,string temp){
   
    if(i==digits.size()){
        ans.push_back(temp);
        return;
    }
    string str=m[digits[i]];
    for(char c:str){
        temp.push_back(c);
        solve(i+1,digits,m,temp);
        temp.pop_back();
    }
   }     
    vector<string> letterCombinations(string digits) {
        if (digits.size()==0)return {};
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
      
        string temp="";
        solve(0,digits,m,temp);
        return ans;
     
    }
}; 