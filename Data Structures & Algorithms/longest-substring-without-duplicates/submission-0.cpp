class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 ;
        int ans = 0 ;
        unordered_set<char> sset;
        
        for(int r = 0 ; r < s.size(); r++){
            while(sset.find(s[r])!=sset.end()){
                sset.erase(s[l]);
                l++;
            }
            sset.insert(s[r]);
            ans = max (ans, r-l+1);
        }
        return ans;
    }
};
