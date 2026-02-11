class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        stack<pair<int,int>>s;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=0)
                continue;
                s.push({i,j});
            }
        }
        while(!s.empty()){
            int row=s.top().first;
            int col=s.top().second;
            for(int i=0;i<m;i++){
                matrix[i][col]=0;
            }
            for(int j=0;j<n;j++){
                matrix[row][j]=0;
            }
            s.pop();
        }
       
        
    }
};