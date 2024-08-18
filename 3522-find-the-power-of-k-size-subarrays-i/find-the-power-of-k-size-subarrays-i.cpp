class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector <int>res;
        for (int i=0; i<=nums.size()-k; i++)
        {
            bool cons=true;
            for(int j=i; j<i+k-1; j++)
            {
                if(nums[j+1]==nums[j]+1);
                else cons=false;
            }
            if(cons)
            res.push_back(nums[i+k-1]);
            else res.push_back(-1);

        }
        return res;
        
    }
};