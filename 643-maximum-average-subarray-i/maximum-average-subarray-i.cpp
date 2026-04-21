class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maximum = INT_MIN;
        double sum = 0;

        for(int i =0; i<k; i++){
            sum+=nums[i];
        }

        maximum = std::max(maximum , sum);

        int i=k;

        while(i<nums.size()){
            sum+=nums[i];
            sum-=nums[i-k];
            maximum = std::max(maximum , sum);
            i++;
        }


        return maximum/k;
    }
};