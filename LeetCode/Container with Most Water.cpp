class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_sum=0,left=0,right=height.size()-1;
        while(left<right)
        {
            max_sum=max(max_sum,min(height[left],height[right])*(right-left));
            if(height[left]>height[right])
                right--;
            else
                left++;
        }
        return max_sum;
    }
};