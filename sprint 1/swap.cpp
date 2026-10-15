#include <iostream>
using namespace std;



int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int m = a*b;
        int mi = abs(a-b);
        int div = a/b;
        int s = a+b;

        cout<<m<<" "<<mi<<" "<<div<<" "<<s<<"\n";

        cout<<"swapped temp"<<"\n";
        int c = a;
        a = b;
        b = c;

        cout<< a<<" "<<b<<"\n";

        cout<<"without temp"<<"\n";

        a = a+b;
        b = a-b;
        a = a-b;

        cout<<a<<" "<<b<<"\n";

    }
    
    

    return 0;
}