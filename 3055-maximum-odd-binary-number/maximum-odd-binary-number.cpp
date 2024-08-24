class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res="";
        int n= count(s.begin(), s.end(), '1');
        for (int i=0; i<s.length(); i++)
        {
            
            if(n>1) 
            {
                res+='1';
                n--;
            }
            else if (n && i==s.length()-1)
                res+='1';
            else 
                res+='0';
        }
       return res;

    }
};