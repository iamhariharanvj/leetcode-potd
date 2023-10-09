class Solution {
public:

    int binarySearch(vector<int>& nums, int target, bool isLeft){
        int left = 0;
        int right = nums.size()-1;
        int index = -1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                index = mid;
                isLeft?right--:left++;
            }
            else if (nums[mid]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {binarySearch(nums, target, true), binarySearch(nums,target, false)};
    }
};