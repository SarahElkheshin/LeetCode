class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

       int res=0;
       vector<int> sum(nums.size(), 0);
       sum[0]=nums[0];
        for (int i=1; i<nums.size(); i++)
        {
            sum[i]=nums[i] + sum[i-1];

        }
        unordered_map<int,int> mp;
         for (int i=0; i<nums.size(); i++)
        {
            if(sum[i] == k) res++;
            int diff=sum[i]-k;
            if(mp.find(diff)!=mp.end())
                  res += mp[diff];
            mp[sum[i]]++;
        }
        return res;
        
    }
};