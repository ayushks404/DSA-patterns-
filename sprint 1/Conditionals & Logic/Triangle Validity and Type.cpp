#include <iostream>
using namespace std;

void count(int a,int b, string op)
{
    if(op == "+"){

        cout<<a+b;

    }else if(op == "-"){
        cout<<a-b;
    }
    else if(op == "*"){
        cout<<a*b;
    }
    else if(op == "/"){
        if(b==0){
            cout<<"error:divisible by zero";
        }
        cout<<a/b;
    }else if(op == "%"){
        if(b==0){
            cout<<"error:division by zero";
        }
        cout<<a%b;
    }
    else{
        cout<<"unknown error";
    }
    
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        string op;
        cin >> a>>b>>op;

        count(a,b,op);
    }

    return 0;
}