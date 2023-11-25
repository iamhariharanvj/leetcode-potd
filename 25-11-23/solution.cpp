class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        for(int i:nums) sum+= i;
        
        int x = sum;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int y = (nums[i]*i) - (nums[i]*(n-i)); 
            int t = nums[i];
            nums[i] = x+y;
            x -= t*2;
        }
       
        return nums;
        
    }
};