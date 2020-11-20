#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    //check first large
	    //assign that to zero
	    //find
	    if(a>b&&a>c){
	        a=0;

	    }
	    else if(b>c){
                b=0;

	    }
	    else {

        c=0;
	    }
	    if(a>b&&a>c){
	        cout<<a<<endl;

	    }
	    else if(b>c){
	        cout<<b<<endl;

	    }
	    else {
	        cout<<c<<endl;
	    }
	}
	return 0;
}
