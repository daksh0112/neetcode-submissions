class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int l = 0 ;
        int r = n-1;
        int lmax = height[l];
        int rmax = height[r];

        while(l<r){
            if(lmax<rmax){
                l++;
                lmax = max(lmax,height[l]);
                ans+=lmax-height[l];
            }else{
                r--;
                rmax = max(rmax,height[r]);
                ans=ans+rmax-height[r];
            }
        }
        return ans;
    }
};
