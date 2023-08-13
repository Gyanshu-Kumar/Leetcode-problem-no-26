class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                    j--;  
                    n--; 
                }
            }
        }

        return n;
    }
};


 