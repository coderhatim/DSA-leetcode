class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int no = 0;
        int i = 0; 
        while(i<nums.size()){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                no++;
            }
            else i++;
        }

        for(int j=0; j<no; j++){
            nums.push_back(0);
        }
    }
};