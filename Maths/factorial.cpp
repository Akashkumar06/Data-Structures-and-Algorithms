#include<iostream>
#define MAX 500
using namespace std;

int multiply(int x,int res[],int n){
    int c=0;

    for(int i=0;i<n;i++){
        int prod=res[i]*x+c;
        res[i]=prod%10;
        c=prod/10;



    }
    while(c){
        res[n]=c%10;
        c=c/10;
        n++;


    }
    return n;





}
void factorial(int val){
    int res[MAX];
    res[0]=1;
    int n=1;
    for(int k=2;k<=val;k++)
        n=multiply(k,res,n);
    cout<<"Factorial of Given number is :"<<endl;
    for(int i=n-1;i>=0;i--)
        cout<<res[i];





}


int main(){

int n;
cout<<"Enter the value which of you want to calculate the factorial:"<<endl;
cin>>n;
factorial(n);
return 0;
}
