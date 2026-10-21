#include <iostream>
using namespace std;
#include <cmath>
bool count(int a)
{

    for (int i = 2; i * i <= a; i++)
    {
        if (a < 2)
            return false;

        if (a % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = 0;
        for (int i = a; i <= b; i++)
        {

            if (count(i))
            {
                cout << i << " ";
                c = 1;
            }
        }
        if (!c)
            cout << "none";
    }

    return 0;
}