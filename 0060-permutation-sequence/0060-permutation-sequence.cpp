class Solution {
public:
    void solve(int k,vector<int>&arr,int n,vector<int>&curr,int &count,vector<int>&visited,bool &found){
        if(found)return;
        if(curr.size()==n ){
            count++;
            if(count == k) found = true;
            return;
            
        }
        for(int i=1;i<=n;i++){

            if(visited[i-1]==1)
            continue;
            visited[i-1]=1;
            curr.push_back(i);
            solve(k,arr,n,curr,count,visited,found);
            if(count==k)
            break;
            visited[i-1]=0;
            curr.pop_back();
        }
    }
    string getPermutation(int n, int k) {
        vector<int>arr;
        vector<int>curr;
        vector<int>visited(n,0);
        bool found=false;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
            
        }
        int count=0;
        solve(k,arr,n,curr,count,visited,found);
        string temp="";
        for(int i=0;i<curr.size();i++){
            char c=curr[i]+'0';
            temp+=c;
        }
        return temp;
    }
};