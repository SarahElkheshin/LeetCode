class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    vector<string> res;
    string first = "qwertyuiop";
    string second = "asdfghjkl";
    string third ="zxcvbnm";
    for (int i=0; i<words.size(); i++)
    {
       if(SameLine(first, words[i]) || SameLine(second, words[i]) || SameLine(third, words[i]))
            res.push_back(words[i]);    
    } 
    return res;
        
    }

    bool SameLine(string line, string word)
    {
        bool possible = true;
        for (int i=0; i<word.length(); i++)
        {
            if(line.find(tolower(word[i])) == std::string::npos)
                possible= false; 
        }
        return possible;

    }
};