#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

void man(string s,string w){

    unordered_map<string ,int> mp;
    int f = 1;

    string wor = "";
    for(int i = 0; i<s.length();i++){
        if( s[i] != ' ' ){

            wor+=tolower(s[i]);
            f=0;
        }
        else if(f==0){
            
            mp[wor]++;
            wor="";
            f=1;
        }

    }
    if(!f) mp[wor]++;
    for (char &ch : w) ch = tolower(ch);
    cout<<mp[ w ];
   
    
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();                        

    while (t--)
    {
        string a, w;
        getline(cin, a);
        getline(cin, w);

        man(a, w);
    }

    return 0;
}