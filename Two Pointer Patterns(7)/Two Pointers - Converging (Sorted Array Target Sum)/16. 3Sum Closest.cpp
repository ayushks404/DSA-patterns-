class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin() , nums.end() );

        int ans = nums[0] + nums[1] + nums[nums.size()-1];
       
        for(int i = 0; i<nums.size(); i++){

            int j = i+1;
            int k = nums.size()-1;

            while(j<k){

                int sum = nums[i] + nums[j] + nums[k] ; 

                

                if( abs(sum - target) < abs( ans - target) ) {

                    ans = sum;
                   
                }

                if (sum == target) return target;
                
                if( sum < target) {
                    j++;
                }
                else if(sum > target){
                    k--;
                }
                
            }
        }
        return ans;
    }
};