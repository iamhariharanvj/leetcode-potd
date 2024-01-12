class Solution {
public:
    int isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
        return 0;
    }
    bool halvesAreAlike(string s) {
        int left=0,right=s.length()-1;
        int lCount=0,rCount=0;
        while(left<right){
            lCount+=isVowel(tolower(s[left++]));
            rCount+=isVowel(tolower(s[right--]));
        }
        return lCount==rCount;
    }
};