class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        if(nums.size()==0)
            return 0;
        
        
        else{
            
            
            
            int j=0;
            int c=0;
            for(auto i=1;i< nums.size(); i++){

                    if(nums[i] != nums[j] ){
                        j++;
                        nums[j]=nums[i];
                    } 

            }
            

            return j+1;
            
        }
        
    }
};
