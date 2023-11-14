class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        int l, r;
        for(char x='a'; x<='z'; x++){
            
            for(l=0; l<s.length()&&s[l]!=x;l++);
            if(l==s.length()) continue;
            for(r=s.length()-1;r>0&&s[r]!=x;r--);
            if(l>=r) continue;

            vector<bool>t (128,false);
            int m = 0;

            for(int k=l+1; k<r; k++){
                if(!t[s[k]]){
                    t[s[k]] = true;
                    m++;
                    if(m==26) break;
                }
            }
            ans += m;
        }
        return ans;
    }
};