class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxW=0;
        while(left<right){
            int h= min(height[left],height[right]);
            int w=right-left;
            int water= h*w;
            maxW=max(maxW,water);
            if(height[left]<height[right])left++;
            else right--;
        }
        return maxW;
    }
};