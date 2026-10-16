#include <iostream>
using namespace std;

void fibb(int n)
{
    int a = 0;
    int b = 1;
    
    if(n == 1){
        cout<<0;
        return ;
    }
    else if(n == 2){
        cout<<0<<" "<<1;
        return;
    }
    else{
        cout<<0<<" "<<1<<" ";
    }

   int c = 0;

   n = n-2;


    while ( n--)
    {

        c = a + b;
        cout << c<<" ";
        a = b;
        b = c;
        
    }

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

        fibb(n);
    }

    return 0;
}