class Solution {
public:
    char kthCharacter(int k) {
        string s= "a";

        while(s.length()<k)
        {
            int len= s.length();
            for(int i=0; i<len; i++)
            {
                s+= s[i]=='z'? 'a': s[i]+1;

            }    
        }
        return s[k-1];
        
    }
};