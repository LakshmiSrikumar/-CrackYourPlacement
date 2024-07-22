class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int left=0;
        int right= n-1;
        int maxvol=0;
        while(left<right){
            int vol = (right-left) * min(height[left],height[right]);
            maxvol=max(maxvol,vol);
            if(height[left]<height[right]){
                left++;
            }else{
            right--;
            }
        }
        return maxvol;
    }
};