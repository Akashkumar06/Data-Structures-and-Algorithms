#include<iostream>
#include<iomanip>
using namespace std;
void getDiscount(float q,float p){
    float val=q*p;
if(q>1000){
cout<<fixed<<setprecision(6)<<val-(val*0.1)<<endl;
}
else
cout<<fixed<<setprecision(6)<<val<<endl;



}

int main() {
    int t;
    cin>>t;
    while(t--){
    float q,p;
    cin>>q>>p;
getDiscount(q,p);
    }

	return 0;
}
