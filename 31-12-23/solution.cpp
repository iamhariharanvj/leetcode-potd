class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char, int> freq ={};
        int ans = -1;
        for(int i=0; i<s.length(); i++){
            if(freq.find(s[i])!=freq.end()){
                ans = max(ans, (i-freq[s[i]])-1);
            }
            else{
                freq[s[i]] = i;
            }
        }
        return ans;
    }
};