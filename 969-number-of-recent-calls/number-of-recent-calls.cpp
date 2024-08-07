class RecentCounter {
    vector<int> vc;
public:
    RecentCounter() {
        vc.clear();
        
    }
    
    int ping(int t) {
        int beg = t-3000;
        vc.push_back(t);
       while (!vc.empty() && vc.front() < beg) {
            vc.erase(vc.begin());
        }
        
        // Return the number of valid pings
        return vc.size();
    
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */