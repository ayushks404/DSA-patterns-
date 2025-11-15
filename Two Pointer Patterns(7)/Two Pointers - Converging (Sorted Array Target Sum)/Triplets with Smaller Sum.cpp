class Solution
{

public:
    long long countTriplets(int n, long long sum, long long arr[])
    {
        // Your code goes here

        long long ans = 0;

        sort(arr, arr + n);

        for (int i = 0; i < n - 2; i++)
        {

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {

                long long curr = arr[i] + arr[j] + arr[k];

                if (curr < sum)
                {
                    ans += k - j;

                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return ans;
    }
};