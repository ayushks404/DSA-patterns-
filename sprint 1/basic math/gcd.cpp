#include <iostream>
using namespace std;

int solve(int a, int b){
    if(b <=0){
        return a;
    }

    return solve(b,a%b);
}


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a<b){
            b = a+b;
            a = b-a;
            a = b-a;
        }
        int ans = solve(a,b);

        cout<<ans<<"\n";

    }
    
    return 0;
}