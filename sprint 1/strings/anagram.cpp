#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(string a,string b){

    unordered_map<char,int> mp;
    for(int i = 0; i<a.length(); i++){
        mp[a[i]]++;
    }

    for(int i = 0; i<a.length(); i++){
        if(mp[b[i]] != 0){
            mp[b[i]]--;
        }
        else{
            cout<<"not anagram";
            return ;
        }
    }
    cout<<"anagram";

   return ;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin >> a>>b;

        if(a.length() != b.length()) {
            cout<<"not anagram";
            return 0;
        }
      
        man(a,b);
    }

    return 0;
}