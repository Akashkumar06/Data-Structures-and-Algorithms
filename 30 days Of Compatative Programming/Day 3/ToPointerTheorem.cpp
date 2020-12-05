#include<iostream>
using namespace std;

bool Sum(int a[],int n,int x){
    int start=0;
    int last=n-1;
    while(start<last){
         //cout<<"Function Enterance"<<a[start]<<" "<<a[last]<<" "<<a[start]+a[last]<<endl;
        if(a[start]+a[last]==x) return 1;
        else if(a[start]+a[last]>x) last--;
        else start++;
        cout<<"Function Enterance"<<a[start]<<" "<<a[last]<<" "<<a[start]+a[last]<<endl;
    }

return 0;

}
int main(){
int a[]={1,2,6,5,6,7};
int n=sizeof(a)/sizeof(a[0]);
cout<<Sum(a,n,50)<<endl;
return 0;

}
