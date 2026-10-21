#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(string a){
    string s ;
    

        int c = 1;
        int i = 1;
        char l = a[0];
        while(i<a.length()){

            if(l == a[i]){
                c++;
            }
            else{

                if(c==1){
                    s+=l;
                }
                else{
                    s+=l+to_string(c);
                }
                    c=1;
                    l=a[i];
            }

            i++;

        }
            if(c==1){
                    s+=l;
            }
            else{
                    s+=l+to_string(c);
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
        
        cin >> enc;

        
      
        man(enc);
    }

    return 0;
}