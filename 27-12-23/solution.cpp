class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int temp = 0;
        int time = 0;
        for(int i=1; i<colors.length(); i++){
            if(colors[temp]==colors[i]){
                if(neededTime[temp]<neededTime[i]){
                    time += neededTime[temp];
                    temp=i;
                }
                else time+=neededTime[i];
            }
            else{
                temp=i;
            }   
        }
        return time;
    }
};