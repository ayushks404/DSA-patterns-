#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 

void man(vector<int>& v){
    int Max=INT_MIN; int Min=INT_MAX;int  Sum=0;double Avg=0;

    
    
     for(int i = 0; i<v.size(); i++){
        if(v[i]>Max){
            Max=v[i];
        }
        if(v[i]<Min){
            Min=v[i];
        }
        Sum+=v[i];
     }


    cout<<Max<<" "<<Min<<" "<<Sum<<" "<<Sum/v.size()<<"\n";

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