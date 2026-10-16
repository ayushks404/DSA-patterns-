#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void count(long long n)
{
    long long s = 0;
    vector<int> v;
    
    for (long long i = 1; i*i<=n; i++)
    {

        if (n % i == 0)
        {

           
            
            cout<< i<<" ";
            v.push_back(n/i);
        }

    }

     for (long long i = v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
     }
    
    cout<<"\n";

    

    return ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        count(n);

    }

    return 0;
}