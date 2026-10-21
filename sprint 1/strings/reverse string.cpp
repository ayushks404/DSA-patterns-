#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>


bool man(string s){
    int i = 0; int j = s.length()-1;

    while(i<j){
        if(s[i] == ' ') i++;
        if(s[j] == ' ') j--;

        if(tolower(s[i] != tolower(s[j]))){
            return false;
        }
        i++;
        j--;
    }
   return true;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

      
        cout<<man(a);
    }

    return 0;
}