class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int i = 0;
        int j = height.size() - 1;

        while (i != j) {
            int val = min(height[i], height[j]) * (j - i);
            if (val > max)
                max = val;

            if (height[i] > height[j])
                j--;
            else
                i++;
        }

        return max;
    }
};