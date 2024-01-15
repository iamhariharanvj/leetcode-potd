class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int N = matches.size();
        vector<int>losses(100001,-1);
        for(auto match:matches){
            if(losses[match[0]]==-1) losses[match[0]]=0;
            if(losses[match[1]]==-1) losses[match[1]]=0;
            losses[match[1]]++;
        }
        vector<int> zeros,ones;
 
        for(int i=1; i<=100000; i++){
            if(losses[i]==1) ones.push_back(i);
            else if(losses[i]==0) zeros.push_back(i);    
        }
        return {zeros,ones};
    }
};