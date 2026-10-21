#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(vector<int>& v){
    unordered_map<int,int> mp;

    
    for(int i = 0; i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto& [a,b]: mp){
        cout<<a<<": "<<b<<",";
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

        
      
        man(v);
    }

    return 0;
}