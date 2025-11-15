class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;

        int i = 0;
        int j = nums.size()-1;

        while(i<=j){

            int sq1 = nums[i]*nums[i];
            int sq2 = nums[j]*nums[j];

            if( sq1 < sq2 ){
                ans.push_back(sq2);
                j--;
            }
            else{
                ans.push_back(sq1);
                i++;
            }
        }
       reverse(ans.begin(), ans.end());

        return ans;
    }
};