#include <iostream>
using namespace std;
#include <cmath>
void count(int a)
{

    for (int i = a; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        count(a);
    }

    return 0;
}