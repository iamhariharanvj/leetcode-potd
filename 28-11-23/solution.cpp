class Solution {
public:
    int numberOfWays(string corridor) {
        bool flag=true;
        int start=-1, end=-1;
        for(int i=0; i<corridor.size(); i++){
            if(flag && corridor[i]=='S') {
                start=i;
                flag=false;
                }
            if(corridor[i]=='S') end=i;

        }
        if(start==end) return 0;
        long count = 1;
        int plantCount = 0;
        int seatCount = 0;
        for(int i=start; i<=end;i++){
            if(corridor[i]=='S'){
                seatCount++;
            }
            else if(seatCount==0){
                plantCount++;
            }
            if(seatCount==2){
                count *= plantCount+1;
                count = count % 1000000007;
                seatCount=0;
                plantCount=0;
            }
        }
        if(seatCount==1) return 0;
        return count;
    }
};