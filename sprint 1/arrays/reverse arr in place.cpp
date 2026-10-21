#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(vector<int>& v){
    int i = 0; int j = v.size()-1;

    while(i<j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
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