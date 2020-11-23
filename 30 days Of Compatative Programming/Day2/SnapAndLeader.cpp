#include <iostream>
#include<math.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
    int b,ls;
    float rs,val;
    cin>>b>>ls;
    rs=sqrt((b*b)+(ls*ls));
    val=sqrt((ls*ls)-(b*b));
    cout<<val<<" "<<rs<<endl;



}
return 0;
}

