class KthLargest {
    int k=0;
    priority_queue <int, vector<int>, greater<int>> order;
public:
    KthLargest(int k, vector<int>& nums) {
         this->k=k;
         for (int i=0; i<nums.size(); i++)
           add(nums[i]);
        
    }
    
    int add(int val) {
         order.push(val);
         if(order.size()> k)
            order.pop();
            
         return order.top();   

            //Return the kth largest element

        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */