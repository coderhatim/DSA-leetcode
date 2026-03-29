class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int HS = 0;
        int S = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1)
                S++;
            else
                S = 0;

            if (S > HS)
                HS = S;
        }
        return HS;
    }
};