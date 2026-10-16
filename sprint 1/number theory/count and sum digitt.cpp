#include <iostream>
using namespace std;

void count(int n)
{
    int s = 0;
    int c = 0;

    while (n)
    {
        s += n % 10;
        n = n / 10;
        c++;
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