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

void man(vector<int>& a, vector<int>& b){
    
    vector<int>ans;
    int i = 0; 
    int j = 0; 

    while(i<a.size() && j<b.size()){
        if(a[i]< b[j]){
            ans.push_back(a[i]);
            ans.push_back(b[j]);
        }
        else{
            ans.push_back(b[j]);
            ans.push_back(a[i]);
        }
        i++;
        j++;
    }

    if(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }
    if(j<b.size()){
        ans.push_back(b[j]);
        j++;
    }

    for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
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

        vector<int> a(n);
        
       
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int m; 
        cin>>m;

         vector<int> b(m);
        
        for(int i = 0; i<m; i++){
            cin>>b[i];
        }

        
        man(a,b);
    }

    return 0;
}