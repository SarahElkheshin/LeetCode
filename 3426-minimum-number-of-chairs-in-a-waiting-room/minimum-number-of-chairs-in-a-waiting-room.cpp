class Solution {
public:
    int minimumChairs(string s) {
        int chairs=0;
        int empty=0;
        for(int i=0; s[i]; i++)
        {
            if(s[i]=='E'&& empty==0)
            {
                chairs++;
            }
            else if(s[i]=='E' && empty>0 )
            {
                empty--;
            }
            else
            {
                empty++;

            }
        }
        return chairs;
        
    }
};