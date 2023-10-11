class Solution {
public:

    int binarySearch(vector<int>& array, int target){
        int left =0;
        int right = array.size()-1;
        int mid;
        while(left<=right){
            mid = (left+right)/2;
            
            if(target>=array[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return right+1;

    }

    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> starts = {};
        vector<int> ends ={};

        for(auto flower: flowers){
            starts.push_back(flower[0]);
            ends.push_back(flower[1]);
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        
        for(int i=0; i<people.size(); i++){
            int startCount =0;
            int endCount =0;
                         
            people[i] = binarySearch(starts, people[i]) - binarySearch(ends, people[i]-1);
        }
        return people;
    }
};