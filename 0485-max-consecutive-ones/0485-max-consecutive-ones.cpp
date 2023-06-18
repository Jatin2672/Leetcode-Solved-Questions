class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=-1;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            
           if(nums[i]==1){
               
              count++;
           }
        
            if(nums[i]==0){
                
                if(count>max){
max=count;
                }
                count=0;
            }
        }
       if(count>max){
           max=count;
       }
        return max;
    }
};