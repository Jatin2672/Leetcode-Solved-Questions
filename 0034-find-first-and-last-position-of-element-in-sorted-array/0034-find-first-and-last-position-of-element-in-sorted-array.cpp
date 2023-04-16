class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingposition=-1;
        int endingposition=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                startingposition=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                endingposition=i;
                break;
            }
        }
        return {startingposition,endingposition};
    }
};