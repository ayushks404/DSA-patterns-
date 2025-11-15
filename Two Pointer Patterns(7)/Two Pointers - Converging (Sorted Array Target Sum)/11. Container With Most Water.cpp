class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int area = 0;
        int i = 0;
        int j = height.size()-1;

        while(i<j){

                if(height[i]< height[j]){
                    area = height[i]*(j-i);
                    i++;
                }
                else{
                    area = height[j]*(j-i);
                    j--;
                }
                ans = max(ans ,area);
                
        }
        return ans;
    }
};