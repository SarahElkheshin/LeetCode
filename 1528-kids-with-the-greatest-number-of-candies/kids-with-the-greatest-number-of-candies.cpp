class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;

        int max_value = *std::max_element(candies.begin(), candies.end());
        for (int i=0; i<candies.size(); i++)
        {
            candies[i] + extraCandies>=max_value? res.push_back(true):res.push_back(false);

        }
         return res;
        
    }
};