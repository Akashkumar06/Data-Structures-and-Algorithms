#include<iostream>
using namespace std;
int getDiscount(int q,int p){
    float val=q*p;
if(q>1000){
 return val-(val*0.1);
}
else
    return val;

}

int main() {
    int t;
    cin>>t;
    while(t--){
    int q,p;
    cin<<q<<p;
    cout<<getDiscount(e,p);


	return 0;
}
