class Solution {
public:
    string reverseWords(string s) {
        string inner="";
        string res="";
         stack<string> stringStack;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ')
            {
                while (s[i]!=' ' && i<s.length())
                {
                    inner+=s[i];
                    i++;
                }
                stringStack.push(inner);
                inner="";
            }
        }
        while(!stringStack.empty())
        {
            res+=stringStack.top() + ' ';
            stringStack.pop();
        }
        res.pop_back();
        return res;
    }
};