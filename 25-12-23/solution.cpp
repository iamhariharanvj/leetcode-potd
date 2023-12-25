class Solution {
public:
    int solve(string s, int start,int end, unordered_map<int,int> &memo){
        if(s[start]=='0') return 0;
        else if(start+1==end) return 1;
        else if(memo.find(start)!=memo.end()) return memo[start];
        else if(start+2==end && stoi(s.substr(start,2))<=26) 
            return memo[start] = 1+solve(s,start+1,end,memo);
        else if(stoi(s.substr(start,2))<=26)
            return memo[start] = solve(s,start+1,end,memo) + solve(s,start+2,end,memo);
        return memo[start] =  solve(s,start+1,end,memo);
        
    }
    int numDecodings(string s) {
        unordered_map<int, int>memo ={};
        return solve(s,0,s.length(), memo);
    }
};