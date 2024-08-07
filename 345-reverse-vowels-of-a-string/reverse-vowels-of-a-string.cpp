class Solution {
public:
    string reverseVowels(string s) {
      stack<char> st; 
        string temp = s;  // Initialize temp with the same size as s

        // Push vowels onto the stack
        for(int i = 0; i < s.length(); i++) {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || 
                tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || 
                tolower(s[i]) == 'u') {
                st.push(s[i]);
            }
        }

        // Replace vowels in the original string with those popped from the stack
        for(int i = 0; i < s.length(); i++) {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || 
                tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || 
                tolower(s[i]) == 'u') {
                temp[i] = st.top();
                st.pop();
            }
        }
        
        return temp;  // Return the modified string
        
    }
};