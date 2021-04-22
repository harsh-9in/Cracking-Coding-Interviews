class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int l=0,r=0;
            for(int j=i;j>=0;j--){
                l=max(l,a[j]);
            }
            for(int j=i;j<n;j++){
                r=max(r,a[j]);
            }
            ans+=(min(l,r)-a[i]);
        }
        
        return ans;
        
        
    }
};
