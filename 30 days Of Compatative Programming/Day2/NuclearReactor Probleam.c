#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>pi(n);
        vector<int>cool(n);

        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            pi.push_back(val);
        }
for(int i=0;i<n;i++){
            int val;
            cin>>val;
            cool.push_back(val);
        }
        sort(pi.begin,pi.end());
        sort(cool.begin,cool.end);
        int ans=0;
        if(sqrt(pow(x2-x1,2)+pow(y2-y1,2))>=r) ++ans;
        if(sqrt(pow(x2-x3,2)+pow(y2-y3,2))>=r) ++ans;
        if(sqrt(pow(x3-x1,2)+pow(y3-y1,2))>=r) ++ans;
        if(ans>=2)
            cout<<"yes";
        else
            cout<<"no";

    }


	return 0;
}

