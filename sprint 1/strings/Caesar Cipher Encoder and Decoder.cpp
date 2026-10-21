#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(string a,int k,string txt){
    string s ;
    if(a=="ENCODE"){

        
        for(char ch: txt){
            s += (char)((ch-'A' +k)%26 + 'A') ; 
        }
    }
    else{
        for(char ch: txt){
            s += (char)((ch-'A' -k)%26 + 'A') ; 
        }
    }

    cout<<s<<"\n";

   return ;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string enc;
        int k ;
        string dec;
        cin >> enc>>k>>dec;

        
      
        man(enc,k,dec);
    }

    return 0;
}