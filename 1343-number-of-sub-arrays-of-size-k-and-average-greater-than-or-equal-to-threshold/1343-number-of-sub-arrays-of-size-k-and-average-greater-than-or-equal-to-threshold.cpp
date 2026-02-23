class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int psum=0;
        int target=threshold*k;
        
        int count=0;
        for(int i=0;i<k;i++){
            psum+=arr[i];
        }
        if(psum>=target){
            count++;
        }
        for(int i=k;i<n;i++){
            psum+=arr[i];
            psum-=arr[i-k];
            if(psum>=target){
                count++;
            }
        }
        return count;
        
    }
};