#include <iostream>
using namespace std;

bool count(int n)
{
    int a = n;

    int ans = 0;

    int b = false;

    while (n > 0)
    {

        ans = ans * 10 + n % 10;
        n = n / 10;
    }
    cout << ans << "\n";

    if (a == ans)
        return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool ans = count(n);
        cout << ans;
    }

    return 0;
}