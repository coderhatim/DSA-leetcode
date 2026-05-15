class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int leftsum = 0;
        int rightsum =0;
        for(int a : nums){
            sum +=a ;
        }

        for(int i=0; i<nums.size(); i++){
            rightsum = sum-nums[i];
            if(leftsum == rightsum) {
                return i;
            }
            sum -= nums[i];
            leftsum += nums[i];
        }
        return -1;
    }
};