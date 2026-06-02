class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = INT_MIN;
        int i = 0 ; 
        int j = heights.size()-1;
        while(i<j){
            int x = (j-i)*(min(heights[i],heights[j]));
            if(x>max){
                max=x;
            }
            if(heights[i]>heights[j]){
                j--;
            }else {
                i++;
            }
        }
        return max;
    }
};
