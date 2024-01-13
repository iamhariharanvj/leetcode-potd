class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length()) return -1;

        vector<int>freq(26,0);
        for(char c:s)
            freq[c-'a']++;
        for(char c:t)
            freq[c-'a']--;

        int sum=0;
        for(int f:freq)
            if(f>0)
                sum+=f;
        return sum;
    }
};