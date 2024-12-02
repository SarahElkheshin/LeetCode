class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)
         return n-1;
         int k=  n/3;
         int rem = n%3;
          if(rem==0)
            return pow(3,k);
          else if(rem==1)
                 return pow(3,k-1)*4;
          else     
            return  pow(3,k)*2;

          
        
        
    }
};