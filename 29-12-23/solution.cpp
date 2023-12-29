class Solution {
public:
    int memo[301][11];
    int solve(vector<int>& job, int d, int index){
        if(memo[index][d]!=-1) return memo[index][d];
        int N = job.size();
        int minDifficulty = INT_MAX;
        int maxDifficulty = INT_MIN;
        if(d==1){
            for(int i=index; i<N; i++){
                maxDifficulty = max(maxDifficulty,job[i]);
            }
            return memo[index][d] = maxDifficulty;
        }
        for(int i=index; i<=N-d; i++){
            maxDifficulty = max(maxDifficulty,job[i]);
            minDifficulty = min(minDifficulty, maxDifficulty+solve(job, d-1, i+1));
        }
        return memo[index][d] = minDifficulty;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        if(jobDifficulty.size()<d) return -1;
        memset(memo,-1,sizeof(memo));
        return solve(jobDifficulty, d, 0);   
    }
};