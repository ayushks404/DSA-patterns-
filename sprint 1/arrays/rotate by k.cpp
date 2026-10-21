#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(vector<int>& v, int k){
    
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());

    for(int i = 0; i<v.size(); i++){
            cout<<v[i];
        }

    cout<<"\n";

   return ;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        
        
        vector<int> v(n);
        
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        int k ;
        cin>>k;
        
      
        man(v,k);
    }

    return 0;
}