class Solution {
public:
    int binarySearch(vector<int>& arr, int t, int s, int e) {
        if(s > e) return -1;

        int mid = s + (e-s) / 2;

        if(arr[mid] == t) return mid;
        if(arr[mid] < t) {
            return binarySearch(arr, t, mid+1, e);
        }
        return binarySearch(arr, t, s, mid-1);
    }


    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        return binarySearch(nums, target, s, e);
    }
};