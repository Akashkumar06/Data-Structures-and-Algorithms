#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

        string s1,s2;


        cin>>s1>>s2;
        int cont=0;

        for(char x :s1){
            int val=x;
            for(char p:s2){
                if(p==val){
                        cont++;

                }

            }
        }
        cout<<cont<<endl;




    }


	return 0;
}

