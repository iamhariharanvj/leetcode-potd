class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num:nums) map[num]++;
        int ops = 0;
        for(auto item:map){
            int count = item.second;
            if(count==1) return -1;
            ops += (count-(count%3))/3;
            count = count%3;
            ops += (count-(count%2))/2;
            ops += count%2;
        }

        return ops;
    }
};