#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int cont=0,ment=0;
        for(int i=0;i<n;i++){
                cin>>a[i];

        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    cont++;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){

               ment++;
               }
        }
        if(cont==ment){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
          }

return 0;
}
