#include <iostream>
using namespace std;
#include <cmath>
int count(int a)
{

    int sum = 0;

    while (a >= 10)
    {

        while (a > 0)
        {
            sum += a % 10;
            a = a / 10;
        }
        a = sum;
        sum = 0;
    }

    return a;
}

int form(int a)
{

    return (a % 9 == 0) ? 9 : a % 9;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        cout << "loop:" << count(a);
        cout << "formula" << form(a);
    }

    return 0;
}