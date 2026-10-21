#include <iostream>
using namespace std;
#include <cmath>
#include <vector>

void count(string s)
{
    
    int con = 0;
    int vow = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'  ){
            vow++;;
        }
        else{
            con++;
        }
        
    }
    cout<<vow<<"\n";
    cout<<con<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        count(a);
    }

    return 0;
}