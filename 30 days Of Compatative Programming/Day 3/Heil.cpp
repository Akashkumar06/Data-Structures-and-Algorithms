#include<iostream>
using namespace std;
int main(){
long long int t;
cin>>t;

while(t--){
        long long int n ,x;
          cin>>n>>x;
        long long int a[100000];
        int i=0;
        if(n<2) return 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        for(int k=x;k>0,i<n-1;k--){
          int  flag=0;

         long long int  p=(log(a[i]) / log(2));
         long long int r=pow(2,p);
         a[i]=a[i]^r;
         for(int j=i+1;j<n;j++){

            if(a[j]^r<a[j]){
                a[j]=a[j]^r;
                flag=1;
                break;

            }
         }
         if(flag){
            a[n-1]^a[n-1]^r;
            while(a[i]<=0){
                i++;
            }
         }
           int z=k+1;
           if(z>0){
            if(n<3 && z%2==0){
                a[n-1]=a[n-1]^1;
                a[n-2]=a[n-2]^1;
            }
           }




}


    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



}
return 0;
}
