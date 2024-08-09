class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        
              return processString(s) == processString(t);
    }

    string processString(string s){
     string str="";
        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == '#') {
                if (!str.empty()) {
                    str.pop_back(); 
                }
            } 
            else
                 str+=s[i];
        }
        return str;
    }
};

