#include <iostream>
using namespace std;

void count(int n)
{
    int s = 0;
    int c = 0;

    int ne = n;

    while (ne)
    {

        ne = ne / 10;
        c++;
    }

    int re = c;
    while (n)
    {

        int v = n % 10;
        int an = 1;

        while (re--)
        {
            an *= v;
        }

        s += an;
        re = c;
        n = n / 10;
    }
    cout << s << " " << c;

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