class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequency;
        for(auto x : nums){
            frequency[x]++;
        }

        vector<pair<int,int>> pr;
        for(auto x : frequency){
            pr.push_back({x.second,x.first});
        }

        sort(pr.rbegin(),pr.rend());

        vector<int>ans;
        for(int i = 0 ; i<k;i++){
            ans.push_back(pr[i].second);
        }
        return ans ;
    }
};
