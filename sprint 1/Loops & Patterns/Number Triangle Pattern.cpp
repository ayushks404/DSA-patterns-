#include <iostream>
using namespace std;
#include <cmath>
void count(int a)
{
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {k++;
            cout << k;
            
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