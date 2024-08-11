class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx,cnt=0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i]==1)
            {
                cnt++;
            }
            else
            {
                cnt>mx? mx=cnt:mx=mx;
                cnt=0;
            }
        }
        return cnt>mx? cnt:mx;
        
    }
};