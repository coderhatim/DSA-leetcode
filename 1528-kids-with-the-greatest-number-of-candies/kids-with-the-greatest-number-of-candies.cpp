class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<bool> result;

        for (int i = 0; i < size; i++) {
            bool isgreater = true;
            for (int j = 0; j < size; j++) {
                if (candies[i] + extraCandies < candies[j]) {
                    isgreater = false;

                    break;
                }
            }
            if (isgreater) {
                result.push_back(true);
            } else
                result.push_back(false);
        }
        return result;
    }
};