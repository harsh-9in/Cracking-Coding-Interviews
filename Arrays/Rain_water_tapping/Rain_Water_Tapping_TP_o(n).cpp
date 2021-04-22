class Solution {
public:
    int trap(vector<int>& a) {
        if(a.empty())
            return 0;
        
        int n=a.size();
        int ans =0,l=0,r=n-1,rmax=0,lmax=0;
        while(l<r){
            if(a[l]<=a[r]){
                if(a[l]>lmax) lmax=a[l];
                else ans+=(lmax-a[l]);
                l++;
            }
            else{
                if(a[r]>rmax) rmax=a[r];
                else ans+=(rmax-a[r]);
                r--;
                
            }
                  
        } 
        
        return ans;
        
    }
};
