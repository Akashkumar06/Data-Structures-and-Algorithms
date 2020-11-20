#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       if(n<2)
            break;
        vector<int>vect;
       for(int i=0;i<n;i++){

         int val;
         cin>>val;
        vect.push_back(val);
       }
       sort(vect.begin(),vect.end());
       cout<<vect[0]+vect[1]<<endl;





    }


	return 0;
}
