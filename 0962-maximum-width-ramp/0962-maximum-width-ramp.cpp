class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;           // guard against empty/size-1 input

        vector<int> right(n);          // <-- allocates n ints, all zero-initialized
        right[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            right[i] = max(nums[i], right[i+1]);
        }

        int i = 0, j = 1, ans = 0;
        while (j < n) {
            if (nums[i] <= right[j]) {
                ans = max(ans, j - i);
                j++;
            } else {
                i++;
            }
        }
        return ans;
    }
};