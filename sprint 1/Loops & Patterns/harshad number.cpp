#include <iostream>
using namespace std;
#include <cmath>
int count(int a)
{

    int sum = 0;

   
        while (a > 0)
        {
            sum += a % 10;
            a = a / 10;
        }
       

    return sum;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        cout << "sum:" << count(a)<<"\n";

        if(a%count(a) == 0) cout<<"harshad";
        else cout<<"not harshad";
    }

    return 0;
}