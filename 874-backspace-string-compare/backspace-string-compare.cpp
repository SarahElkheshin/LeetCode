class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss,tt="";
        for (int i=0; i<s.length(); i++)
        {
              if (s[i] == '#') {
                if (!ss.empty()) {
                    ss.pop_back();  // Remove last character if `#` is encountered
                }
            } 
            else
                 ss+=s[i];
        }
        for (int i=0; i<t.length(); i++)
        {
            
            if (t[i] == '#') {
                if (!tt.empty()) {
                    tt.pop_back();  // Remove last character if `#` is encountered
                }
            }
            else
                tt+=t[i];
           
        }
        

        return ss==tt;
    }
};