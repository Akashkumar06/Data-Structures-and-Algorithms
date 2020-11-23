#include <iostream>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n>1000)
       break;
    char str[n];
    cin>>str;
    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='I'){
            cout<<"INDIAN"<<endl;
            break;
        }
        else if(str[i]=='Y'){
            cout<<"NOT INDIAN"<<endl;
            break;
        }
        c++;
    }
    if(c==n)
    cout<<"NOT SURE"<<endl;
}
}
