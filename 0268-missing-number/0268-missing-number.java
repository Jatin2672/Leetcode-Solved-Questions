class Solution {
    public int missingNumber(int[] nums) {
        int orignalsum=0;
        int arraysum=0;
        for(int i=1;i<=nums.length;i++){
            orignalsum=orignalsum+i;
        }
        for(int i=0;i<nums.length;i++){
            arraysum=arraysum+nums[i];
        }
        return orignalsum-arraysum;
    }
}