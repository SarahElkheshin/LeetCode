class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        map<int,int> mp;
        for (int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]==0)
            {
                nums[k++]= nums[i];
                mp[nums[i]]++;
            }
        }
        return k;
    }
};