class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        int count=0;
       for(int i=0;i<nums.size();i++){
           
           if(nums[i]!=0){
               arr.push_back(nums[i]);  
           }
           else{
               count++;
           }
       }
        while(count!=0){
               arr.push_back(0);
            count--;
            }
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
            
    }
};