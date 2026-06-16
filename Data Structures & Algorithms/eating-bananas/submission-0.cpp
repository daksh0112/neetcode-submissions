class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ; int r = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;

        while(l<=r){
        int m = l+(r-l)/2;
        int x = cal(piles , m);
        if(x<=h){
            ans = m;
            r=m-1;
            
        }else{
            l=m+1;
        }
        }
        return ans;
    }
    
    int cal(vector<int>& v, int m){
        int total = 0;
        for(int i = 0 ; i<v.size();i++){
            total+=ceil(double(v[i])/m);
        }
        return total;
    }
};
