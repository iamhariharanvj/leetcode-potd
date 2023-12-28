class Solution {
public:
    int solve(string &s, int k, int index,vector<vector<int>> &memo){
        int n = s.length();
        int K = k;
        if(n-index<=k) return 0;
        if(memo[index][k]!=-1) return memo[index][k];
        int c=1;
        int ans = K?solve(s,K-1,index+1,memo):101;
        for(int i=index+1; i<=n; i++){
            ans = min(ans, 1 + ((c>99)?3:(c>9)?2:(c>1)?1:0) + solve(s,K,i,memo));

            if(i<n && s[i]==s[index]) c++;
            else if(--K<0) break;
        }
            return memo[index][k] = ans;
        }
    int getLengthOfOptimalCompression(string s, int k) {
        vector<vector<int>> memo(101,vector(101,-1));
        return solve(s,k,0,memo);
    }
};