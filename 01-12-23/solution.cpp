class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int a=0,b=0,c=0,d=0;

        while(a<word1.size() && c<word2.size()){
            if(word1[a][b++]!=word2[c][d++]) return false;

            if(b==word1[a].size()){
                b=0;
                a++;
            }
            if(d==word2[c].size()){
                d=0;
                c++;
            }
        }
        return a==word1.size() && c==word2.size();

    }
};