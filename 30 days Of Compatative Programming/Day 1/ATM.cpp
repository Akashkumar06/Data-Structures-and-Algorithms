#include <iostream>
using namespace std;

int main() {
int t,val;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    for(int j=n;j<=1;j--){
        int fact=1;

        fact=fact*j;
        cout<<"Value of Fact:"<<fact<<endl;
        val=fact;

    }
    cout<<val<<endl;

}

	return 0;
}
