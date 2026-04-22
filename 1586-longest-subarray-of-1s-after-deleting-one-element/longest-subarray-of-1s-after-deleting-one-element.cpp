class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count =0;
        int max = INT_MIN;
        int Kcount = 1;
        int i =0 ,j=0;
        while(j<nums.size()){
            if(nums[j] == 0 && Kcount > 0){
                count++;
                Kcount--;
                j++;
            }
            else if(nums[j] == 0){
                while(Kcount<=0){
                    if(nums[j-count] == 1){
                        count--;
                    }
                    else{
                        count--;
                        Kcount++;
                    }
                }
            }
            else {
                count++;
                j++;
            }

             max = std::max(max,count);
        }
        return max-1;
    }
};