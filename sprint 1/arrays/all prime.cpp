#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map> 


bool prme(int a){

    if(a<2) return false;
    for(int i = 2; i*i<=a; i++){
        if(a%i == 0) return false;
    }
    return true;
}

void man(vector<int>& v){
    
    vector<int>ans;
    int sum = 0;

    for(int i = 0; i<v.size(); i++){
        if(prme(v[i])){
            ans.push_back(v[i]);
        }
        sum+=v[i];
    }

    for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<"sum: "<<sum;

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