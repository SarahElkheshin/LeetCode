class Solution {
public:
    int minPartitions(string n) {
        for(int i=9; i>0; i--)
        {
            if(find(n.begin(), n.end(), '0' +i)!= n.end())
                return i;
        }
        return 0;
        
    }
};