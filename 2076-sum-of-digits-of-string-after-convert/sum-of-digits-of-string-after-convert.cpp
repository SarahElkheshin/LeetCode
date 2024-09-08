class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for (int i=0; s[i]; i++)
        {
             num += std::to_string(s[i] - 'a' +1);
        }
       
        
        while(k--)
        {
            int sum=0;
            for (int i=0; num[i]; i++)
            {
                sum+=num[i]-'0';
            } 
            num=to_string(sum);
            

        }
        return stoi(num);
        
    }
};