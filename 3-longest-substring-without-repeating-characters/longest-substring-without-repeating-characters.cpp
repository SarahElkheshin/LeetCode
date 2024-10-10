class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLen=0;
        int left=0;
        set<char> occ;
        
        for (int right=0; right<s.length(); right++)
        {
            if(occ.find(s[right])==occ.end())
            {
                occ.insert(s[right]);
                 maxLen=max(maxLen, right-left+1);
            }
            else
            {
                while(occ.find(s[right])!=occ.end())
                {
                    occ.erase(s[left]);
                    left++;
                }
                occ.insert(s[right]);
            }
           

            

        }
        return maxLen;
        
    }
};