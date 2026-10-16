#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b <= 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        //int ans = a * b / gcd(a, b);
        int ans = a/gcd(a,b) * b;//better bcz early divide
        
        cout << ans << "\n";
    }

    return 0;
}