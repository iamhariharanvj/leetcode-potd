class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans = {};
        unordered_map<int, stack<int>> m = {};
        int maxKey = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                int key = i+j;
                m[key].push(nums[i][j]);
                maxKey = max(maxKey, key);
            }
        }

        for(int i=0; i<=maxKey; i++){
            while(!m[i].empty()){
                ans.push_back(m[i].top());
                m[i].pop();
            }
        }
        return ans;
    }
};