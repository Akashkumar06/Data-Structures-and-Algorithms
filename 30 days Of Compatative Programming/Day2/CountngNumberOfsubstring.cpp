#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int val;
        cin>>val;
        string s;
        cin>>s;
         int cont = 0;
            for(int i=0;i<val;i++)
                if(s[i]=='1')
                        cont++;
        cout<<(cont*(cont+1))/2<<endl;

        }


    return 0;
}

