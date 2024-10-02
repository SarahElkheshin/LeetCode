class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy=arr;
        vector<int>res;
        map<int,int>rank;
        int counter =1;

        sort(copy.begin(), copy.end());       
       for (int i=0; i< copy.size(); i++)
       {
        if(rank[copy[i]]==0)
           rank[copy[i]] = counter++;
       }
        for (int i=0; i< arr.size(); i++)
        {
           
            res.push_back(rank[arr[i]]);

        }
        return res;
        
    }
};