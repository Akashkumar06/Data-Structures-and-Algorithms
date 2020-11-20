#include <iostream>

#define MOD 1000000007
#define N 45

using namespace std;


long long int cont;
long long int f[N+1];

void cf(long long int x, int k, int q){

    if(x==0 && k==0)
        cont++;

    if(x<=0 || k<=0 || q < 0)
        return ;

    if(k * f[q] < x)
    	return;

    cf(x , k, q - 1);

    if(x >= f[q] ){
        cf(x - f[q] , k - 1, q);
    }
}
int main() {
	// your code goes here
	int i;
	int q, k, t;
	long long int x;
	f[0] = 1;
	f[1] = 2;
	for(i = 2 ; i<=N ; i++)
	    f[i] = f[i-1] + f[i-2];

	cin >> t;
	while(t--){
	    cont = 0;
	    cin >> x >> k;
	    q = N;
	    while(f[q]>x)
	        q--;
	    cf(x, k, q);
	    cout << cont << "\n";
	}
	return 0;
}
