class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int>::iterator it;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        auto nums1_end = unique(nums1.begin(), nums1.end());
        auto nums2_end = unique(nums2.begin(), nums2.end());

        ans.push_back(vector<int>(nums1.size()));
        it = set_difference(nums1.begin(), nums1_end, nums2.begin(), nums2_end, ans[0].begin());
        ans[0].resize(it-ans[0].begin());

        ans.push_back(vector<int>(nums2.size()));
        it = set_difference(nums2.begin(), nums2_end, nums1.begin(), nums1_end, ans[1].begin());
        ans[1].resize(it-ans[1].begin());

        return ans;
    }
};