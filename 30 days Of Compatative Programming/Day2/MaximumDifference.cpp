#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){

        int n,k;

        cin>>n>>k;
                vector<int>vect(n);
        k=min(k,n-k);

        for(int i=0;i<n;i++){

           cin>>vect[i];
        }
        sort(vect.begin(),vect.end());
        long long sum =0;
        for(int i=k;i<n;i++){
            sum+=vect[i];
        }
        for(int i=0;i<k;i++)
            sum-=vect[i];

        cout<<sum<<endl;




    }


	return 0;
}


