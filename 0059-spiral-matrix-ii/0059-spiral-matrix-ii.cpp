class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;

        while(left<=right&& top<=bottom){
            for(int j=left;j<=right;j++){
                ans[top][j]=num++;

            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=num++;

            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=num++;
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    ans[j][left]=num++;
                }
                left++;
            }
        }
        return ans;
        
    }
};