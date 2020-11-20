#include <iostream>

#include<iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int b;
        float h,d;
        cin>>b;
    if(b>=1500)
        {
                   h=500;
                   d=0.98*b;
        }
        else
    {
        h=0.1*b;
        d=0.9*b;
    }
    cout<<fixed << setprecision(2) << b+h+d<< endl;
    }
    return 0;
}

