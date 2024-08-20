class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count =0;
        map<char, int> mpOfChar;
        for (char c : chars)
              mpOfChar[c]++;
      for (string word : words)
        {
              map<char, int> mpOfCharForEachWord;
              bool canForm = true;
            for (char c : word) {
                mpOfCharForEachWord[c]++;

                // Check if the current character in the word exceeds the available count in `chars`
                if (mpOfCharForEachWord[c] > mpOfChar[c]) {
                    canForm = false;
                    break;
                }
            }
            if(canForm)
                count += word.size(); 
        
        }
    return count; 

       
        
    }
};