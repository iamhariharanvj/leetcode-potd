class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), max=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]+nums[n-i-1]>max) max=nums[i]+nums[n-i-1]; 
        }
        return max;
    }
};