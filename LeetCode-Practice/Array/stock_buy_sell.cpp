class Solution {
public:
    int maxProfit(vector<int>& a) {
        
       int profit=0;
        
        for(auto i=a.begin()+1; i<a.end(); i++){
             if(*i  > *(i-1))
             {
                 profit+=*i - *(i -1);
             }
        }
        return profit;
        
    }
};
