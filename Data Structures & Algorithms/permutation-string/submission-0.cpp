class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> ans(26,0);
        for(int i = 0 ; i<s1.size();i++){
            ans[s1[i]-'a']++;
        }
        vector<int> window(26, 0);
        for(int i = 0 ; i<s2.size();i++){
            window[s2[i] - 'a']++; 

            if(i>=s1.size()){
                window[s2[i-s1.size()]-'a']--;
            }
            if(window==ans) return true;
        }
        return false;
        
    }
};
