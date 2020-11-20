#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
        cin>>n;
    int rem,rev,temp;
    temp=n;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
        cout<<"wins"<<endl;
    else
        cout<<"losses"<<endl;

    }




}
