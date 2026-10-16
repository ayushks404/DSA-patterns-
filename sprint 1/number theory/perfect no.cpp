#include <iostream>
#include <cmath>
using namespace std;

long long count(long long n)
{
    long long s = 0;

    for (long long i = 1; i*i <= n; i++)
    {

        if (n % i == 0)
        {

            s += i;
            if(i!=n/i) s+=n/i;
        }

    }

    cout << s-n;

    return s-n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = count(n);

        cout << ((ans == n) ? "perfect" : "not perfect");
    }

    return 0;
}