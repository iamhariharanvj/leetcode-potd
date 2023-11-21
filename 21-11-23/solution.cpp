class Solution {
public:
    int reverse(int num){
        int rev = 0;
        while(num>0){
            rev = rev*10 + num%10;
            num/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> freq = {};
        long count =0;

        for(int n:nums){
            int x = n-reverse(n);
            count = (count + freq[x]) % 1000000007;  
            freq[x]++;
        } 
        return (int) count;
    }
};