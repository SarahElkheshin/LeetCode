class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod;
        int total=1;
        int totalNonZero=1;
        int zeroCount=0;

        for( int i=0; i<nums.size(); i++)
        {   
            total*=nums[i]; 
            if(nums[i]==0)
            {
                zeroCount++;
            }
            else
            {
                totalNonZero*=nums[i]; 
            }
                                    
        }

       for( int i=0; i<nums.size(); i++)
       {
            if(nums[i]==0 && zeroCount==1)
            {
                prod.push_back(totalNonZero);
            }
            else
            {
                nums[i]==0?  prod.push_back(total) : prod.push_back(total/nums[i]);
            }
        }
       return prod;

        
    }
};