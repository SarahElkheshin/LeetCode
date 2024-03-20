class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int len1=word1.length();
        int len2=word2.length();
        int smallestLen  = len1>len2? len2:len1;
        for(int i=0; i<smallestLen; i++)
        {
            res+= word1[i];
            res+= word2[i];
        }
       if(len1>len2)
             res+=word1.substr(len2);
        else
             res+=word2.substr(len1);
        return res; 
    }
};