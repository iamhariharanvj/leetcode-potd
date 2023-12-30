class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int N = words.size();
        vector<int> freq(26,0);
        for(string word:words)
            for(char letter:word)
                freq[letter-'a']++;
   
        for(int i=0; i<26; i++)
            if(freq[i]%N!=0)
                return false;

        return true;
    }
};class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int N = words.size();
        vector<int> freq(26,0);
        for(string word:words)
            for(char letter:word)
                freq[letter-'a']++;
   
        for(int i=0; i<26; i++)
            if(freq[i]%N!=0)
                return false;

        return true;
    }
};