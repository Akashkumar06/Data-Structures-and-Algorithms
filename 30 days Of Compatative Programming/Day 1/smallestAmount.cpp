#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,cont=0;
	    cin>>a;
	    //check first large
	    //assign that to zero
	    //find
	    while(a!=0){
                	    if(a>=100){
                        cont+=a/100;
                                                        a-=100*(a/100);


	    }
	    else if(a>=50){
                cont+=a/50;
                a-=50*(a/50);

	    }
	    else if(a>=10){

	        cont+=a/10;
	        a-=10*(a/10);

	    }
	    else if(a>=2){
	        cont+=a/2;
	        a-=(a/2)*2;

	    }
	    else {

	        cont+=a;
	        a-=a;
	    }

	    }
	    cout<<cont<<endl;

	}
	return 0;
}
