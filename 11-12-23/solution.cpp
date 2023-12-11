class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int N=arr.size(), count=1;
        for(int i=1; i<N; i++){
            if(arr[i]==arr[i-1]) count++;
            else count=1;
            if(count>N/4) return arr[i];
        }
        return -1;
    }
};