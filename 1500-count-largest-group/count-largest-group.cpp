class Solution {
public:
    int countLargestGroup(int n) {
        map<int,int> mp;
        for (int i=1; i<=n; i++)
        {
            if(i<10) mp[i]++;
            else
            {
            int temp=i;
            int sum=0;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            mp[sum]++;
            }
        }
        int mx=0;
        for(auto it: mp)
        { 
        mx<it.second? mx=it.second: mx;
        }

        int count=0;
         for(auto it: mp)
        { 
            mx==it.second? count+=1: count;
        }
        return count;

        
    }
};