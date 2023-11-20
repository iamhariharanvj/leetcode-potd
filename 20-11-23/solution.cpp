class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int total=0, G=0,P=0,M=0,sum=0;

        for(int i=0; i<garbage.size(); i++){
            for(char c:garbage[i]){
                if(c=='G'){
                    G=i;
                }
                else if(c=='P'){
                    P=i;
                }
                else{
                    M=i;
                }
                total++;
            }
        }

        for(int i=1; i<travel.size();i++){
            travel[i] += travel[i-1];
        }

        sum+= G-1==-1?0:travel[G-1];
        sum+= P-1==-1?0:travel[P-1];
        sum+= M-1==-1?0:travel[M-1];
        sum += total;
        return sum;
    }
};