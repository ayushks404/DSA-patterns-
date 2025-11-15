class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        do
        {

            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        // after finding the cycle (or same number /duplicate)
        // we set slow at start and move both slow and fast one by one
        slow = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};