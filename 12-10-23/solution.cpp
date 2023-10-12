/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
int findPeak(MountainArray &mountainArr) {
    int length = mountainArr.length();
    int l = 1;
    int r = length - 2;

    int peak = -1;
    while(l <= r) {
        int mid = l + r >> 1;
        int c = mountainArr.get(mid);
        int le = mountainArr.get(mid - 1);
        int re = mountainArr.get(mid + 1);
        if(c > le && c > re) {
            peak = mid;
            break;
        } else if(c > le) {
            l = mid + 1;
        } else {
        
            r = mid - 1;
        }
    }
    return peak;
}


    int binarySearch(MountainArray &mountainArr, int peak, int target){
        int left = 0;
        int right = peak;

        while(left<=right){
            int mid = (left+right)/2;
            int elem = mountainArr.get(mid);
            if(elem==target) return mid;
            else if (elem>target) right = mid-1;
            else left = mid+1;
        }
        left = peak+1;
        right = mountainArr.length()-1;
        while(left<=right){
            int mid = (left+right)/2;
            int elem = mountainArr.get(mid);
            if(elem==target) return mid;
            else if (elem>target) left = mid+1;
            else right = mid-1;
        }

        return -1;
        
    }


    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak =  findPeak(mountainArr);
        cout << peak;
        return binarySearch(mountainArr, peak, target);
    }
};  