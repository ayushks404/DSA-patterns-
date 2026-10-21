#include <iostream>
using namespace std;
#include <cmath>
void count(int a)
{
    int k = 0;
    for (int i = 1; i<=a; i++)
    {
        for (int j = 0; j <= a-i; j++)
        {
            cout<<" ";
        }
        for(int j = 0; j<2*i-1; j++){
            cout<<"*";
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