class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest=nums[1]+nums[2]+nums[3];
        for(int i=0;i<n-2;i++){
            int start=i+1;
            int end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(abs(target-sum)<abs(target-closest)){
                    closest=sum;
                }
                if(sum<target)start++;
                else if (sum>target)end--;
                else return sum;
            }
        }
       return closest;
        
    }
};