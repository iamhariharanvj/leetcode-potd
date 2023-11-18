class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long sum=0;
        int ans=0;
        int N = nums.size();
        for(int i=0,r=0; r<N; r++){
            sum+= nums[r];
            while(sum+k < (long)(r-i+1)*nums[r]){
                sum -= nums[i++];
            }
            ans = max(ans, (r-i+1));
        }
        return ans;
    }
};