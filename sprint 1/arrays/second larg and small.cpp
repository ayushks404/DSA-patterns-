#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(vector<int>& v){
    int Max=INT_MIN; int Min=INT_MAX;
    int smax=v[0]; int smin=v[0];

    
    
     for(int i = 0; i<v.size(); i++){

        if(v[i]>Max){
            smax = Max;
            Max=v[i];
            
        }
        else if(v[i]<Max && v[i]>smax){
            smax = v[i];
        }


        

        if(v[i]<Min){
            
            smin=Min;
            Min=v[i];
            
        }
        else if(v[i]>Min && v[i]<smin){
            smin = v[i];
        }
        
     }


    cout<<Max<<" "<<smax<<" "<<Min<<" "<<smin<<" "<<"\n";

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