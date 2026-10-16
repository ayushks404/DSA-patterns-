#include <iostream>
using namespace std;

int iter(int b, int e)
{
    int ans = 1;

    while (e--)
    {
        ans *= b;
    }

    return ans;
}

int count(int b, int e)
{
    if (e == 0)
        return 1;

    return b * count(b, e - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, e;
        cin >> b;
        cin>>e;

        cout << iter(b, e)<<"\n";
        cout << count(b, e);
    }

    return 0;
}