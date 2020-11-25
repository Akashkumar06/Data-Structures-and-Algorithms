#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

        int x,y,k,n;


        cin>>x>>y>>k>>n;
        int req=x-y;
        bool response=false;
        for(int i=0;i<n;i++){
                int val1,val2;
                cin>>val1>>val2;
                if(val1>=req && val2<=k){
                    response=true;
                    break;
                }

        }
        if(response)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnLuckyChef"<<endl;



    }


	return 0;
}
