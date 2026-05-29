class Solution {
public:
    int maxArea(vector<int>& heights) {
        int a = 0;
        int b = heights.size() - 1;
        int area = min(heights[a], heights[b]) * (b - a);
        while (a != b){
            if (heights[a] < heights[b]){
                a++;
            }else{
                b--;
            }
            area = max(area, min(heights[a], heights[b]) * (b - a));
        }
        return area;
    }
};
