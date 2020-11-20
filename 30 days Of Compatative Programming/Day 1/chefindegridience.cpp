#include<iostream>
using namespace std;
//function for gcd
int gcd(int a,int b){
if(a==0)
    return b;
return gcd(b%a,a);

}
int findGCD(int arr[],int n){
int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}




int main(){
    int t;
    cin>>t;
    while(t--){

        int n,a[51];
        cin>>n;
        if(n<2){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int val=findGCD(a,n);
        cout<<val<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]/val<<endl;
        }

    }

}
