#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;
    long long a[n];

    for(int i=0;i<n;i++){
            cin>>a[i];

    }

   sort(a,a+n);
    //add value 1 to make it equal
    int x=0;
    for(int i=1;i<n;i++){
            x+=a[i]-a[0];


    }
    cout<<x<<endl;
}


	return 0;
}
