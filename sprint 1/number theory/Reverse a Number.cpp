#include <iostream>
using namespace std;

void count(int n)
{
   
   int ans = 0;

    while (n)
    {
        ans += (n%10);
        ans=ans*10;
        n=n/10;
    }
    cout << ans/10;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        count(n);
    }

    return 0;
}