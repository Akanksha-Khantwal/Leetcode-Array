class Solution {
public:
    string countAndSay(int n) {
       string s="1";
       
       for(int i=2;i<=n;i++){
        int count=1;
        string temp="";
        for(int j=1;j<s.size();j++){
            if(s[j]==s[j-1]){
                count++;
               
            }
            else{
                temp+=to_string(count);
                temp+=s[j-1];
                count=1;
            }

        }
        temp+=to_string(count);
        temp+=s[s.size()-1];
        s=temp;
        
       }
        return s;
    }
};