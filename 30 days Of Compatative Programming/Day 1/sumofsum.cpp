
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
//fuct
int sum(int n){
    int val=0;
for(int i=1;i<=n;i++){
        val=val+i;



}

return val;

}
int calcsum(int d , int n){
    int val;
            if(d==1)
            return sum(n);
    while(d--){


             return sum(calcsum(d,n));

    }
    //return val;




}


int main(){
int t;
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
       cout<<calcsum(d,n)<<endl;


    }


	return 0;
}
