#include <iostream>
using namespace std;

void count(int a, int b, int c)
{

    if ((a >= 18 && b == 1) && c == 0)
    {

        cout << "Eligible" << "\n";
    }
    else
    {
        cout << "not eligible" << "\n";

        if (a < 18)
        {

            cout << "underage, ";
        }
        if (b == 0)
        {
            cout << "non citizen, ";
        }
        if (c == 1)
        {
            cout << "disqualified, ";
        }
    }

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int c;
        cin >> a >> b >> c;

        count(a, b, c);
    }

    return 0;
}