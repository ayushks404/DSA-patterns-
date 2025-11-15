class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s( nums1.begin(), nums1.end() );
        vector<int> ans;

        for(auto& num: nums2){
           
                if (s.erase(num)) {  // erase returns 1 if element was present
                    ans.push_back(num);
                }
            
        }

        
        return ans;
    }
};