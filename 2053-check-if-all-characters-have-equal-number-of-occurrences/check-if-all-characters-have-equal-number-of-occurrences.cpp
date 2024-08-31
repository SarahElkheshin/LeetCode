class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for (int i=0; s[i]; i++)
        {
            mp[s[i]]++;
        }
        int occurrence=mp[s[0]];
        for (auto it:mp)
        {
            if (it.second!=occurrence)
            return false;
        }
        return true;
    }
};