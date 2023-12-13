class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rowSum(mat.size(),0);
        vector<int> colSum(mat[0].size(),0);

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1){
                    rowSum[i]++;
                    colSum[j]++;
                }
            }
        }

        int count =0;

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1 && rowSum[i]==1 && colSum[j]==1){
                    count++;
                }
            }
        }

        return count;
    }
};