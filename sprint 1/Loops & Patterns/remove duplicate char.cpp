#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(string a){
    string s ;
    

        int i = 1;
        char l = a[0];
        while(i<a.length()){

            if(l != a[i]){
                s+=l;
                l=a[i];
            }
            else{
                i++;
                continue;
            }
            i++;
                

        }
           
        s+=l;
           

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
        
        cin >> enc;

        
      
        man(enc);
    }

    return 0;
}