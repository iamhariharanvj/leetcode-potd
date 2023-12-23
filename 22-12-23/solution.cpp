class Solution {
public:
    int maxScore(string s) {
        int max_score = 0;
        int left_zeros = 0;
        int right_ones = 0;

        for(char c:s)
            if(c=='1') right_ones+=1;

        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='0')left_zeros++;
            if(s[i]=='1') right_ones--;
            max_score = max(max_score, left_zeros+right_ones);
        }
        return max_score;
    }
};