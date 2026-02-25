class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[mid + 1]) {
                // You are in the decreasing part of the array.
                // This may be the answer, but look at left side
                // This is why end != mid - 1
                end = mid;
            } else {
                // You are in the ascending part of the array.
                start = mid + 1;
            }
        }
        
    }
};