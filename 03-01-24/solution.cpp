class Solution {
public:
    int countOnes(const string &bank){
        int count=0;
        for(char c:bank)
            if(c=='1')
                count++;
        return count;
        
    }
    int numberOfBeams(vector<string>& bank) {
        int prev = countOnes(bank[0]),ans=0;
        for(int i=1; i<bank.size();i++){
            int curr = countOnes(bank[i]);
            if(curr==0) continue;
            ans += prev*curr;
            prev = curr;
        }
        return ans;
    }
};