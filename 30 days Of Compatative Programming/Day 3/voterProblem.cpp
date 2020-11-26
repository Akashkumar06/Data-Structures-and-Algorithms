#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    int t=a+b+c;
    set<int>s;
    while(t--){
        long long int val,n;
        cin>>n;
        s.insert(val);
    }
    set<int>s2;
    for(auto x : s) if(s.count(x)>1){
        s2.insert(x);
    }
     cout<<s2.val<<endl;
    for(auto x:s) if(s.count(x)>1){
        cout<<x<<endl;
    }
    }
return 0;
}


