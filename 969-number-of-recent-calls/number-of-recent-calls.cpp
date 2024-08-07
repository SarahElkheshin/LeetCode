class RecentCounter {
    vector<int> vc;
public:
    RecentCounter() {
        vc.clear();
        
    }
    
    int ping(int t) {
        int beg = t-3000;
        int cnt=0;
        vc.push_back(t);
        for(auto val:vc)
        {
            if(val>=beg && val<=t)
            cnt++;
        }
        return cnt;
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */