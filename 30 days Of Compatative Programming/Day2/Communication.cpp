#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int r,x1,x2,x3,y1,y2,y3;
        cin>>r;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
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

