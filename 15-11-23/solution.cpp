class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size(), ans=1;
        vector<int> c = vector(n+1,0);
        for(int i=0; i<n; i++)c[min(arr[i], n)]++;
        for(int j=2; j<=n; j++) ans= min(ans+c[j],j);
        return ans;
    }
};