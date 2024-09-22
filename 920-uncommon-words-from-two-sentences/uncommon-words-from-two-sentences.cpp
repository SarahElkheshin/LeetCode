class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       vector<string> first=tokenize(s1);
       vector<string> second=tokenize(s2);
       vector<string> res;
       map<string,int> mp;
       for(int i=0; i<first.size(); i++)
             mp[first[i]]++;
        for(int i=0; i<second.size(); i++)
             mp[second[i]]++;
        for  (auto it : mp)
        {
            if(it.second ==1)
                res.push_back(it.first);
        }   
        return res;

    }
    vector<std::string> tokenize(const std::string& s) {
    stringstream ss(s);
     vector<string> ans;
    while (!ss.eof()){
            string tmp;
            ss>>tmp;
            ans.push_back(tmp);
        }
    ss.clear();
    return ans;
}
};