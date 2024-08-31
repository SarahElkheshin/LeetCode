class Solution {
public:
    int minimumChairs(string s) {
        int chairs=0;
        int res=0;
        for(int i=0; s[i]; i++)
        {
            s[i]=='E'? chairs++:chairs--;
            res = max(res,chairs);
        }
        return res;
        
    }
};