class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mx=0;
        int res=0;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;

        }
        for(auto it:mp)
            if(mx<it.second)
              {
                mx=it.second;
                res=it.first;
              }
        
        return res;

    }
};