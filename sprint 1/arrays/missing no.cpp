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

void man(vector<int>& a){
    
   
    unordered_map<int,int> mp;
    for(int i = 0; i<a.size(); i++){
            mp[a[i]]++;
    }

    int sum =0;
    int mis = 0;

    for(auto& [b,c] : mp){
            sum+=b;
            if(c>1) mis = b;
    }
    int n = a.size();

    cout<<"miss: "<<(n*(n+1)/2) - sum<<","<<"dup : "<<mis;



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
       

        
        man(a);
    }

    return 0;
}