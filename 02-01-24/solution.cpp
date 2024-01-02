class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> freq(nums.size()+1);
        for(int c:nums){
            if(freq[c] >= ans.size())
                ans.push_back({});
            
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        return ans;
    }
};