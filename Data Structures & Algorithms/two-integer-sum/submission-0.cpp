class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>ans ;

        for(int i =0 ; i<n ; i++){
            int r = target - nums[i];
            if(ans.count(r)){
                return {ans[r],i};
            }
            ans[nums[i]]=i;
        }
        return {};
    }
};
