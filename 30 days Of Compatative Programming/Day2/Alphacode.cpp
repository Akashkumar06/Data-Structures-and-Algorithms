#include<iostream>
#include<vector>

using namespace std;

int countWays(string str, int start){

	int n = str.size();
 	int total = 0;

	// Index must be in valid range
 	if( start > n-1 ) return 0;

	// countWays(str, 0 ) =
		// countWays(str, 1) +
		// countWays(str, 2);

	// First part
 	// 1. if we treat first digit independently
 	//  1-9

 	//  0 1 2 3 4 5 6 7 8 9
	if( str[start ] >= '1' && str[start] <= '9') {

		// 25114
		//     4
		if( start == n-1 )
			total = total + 1;
		else{
			total = total + countWays(str, start + 1) ;
		}
	}

 	// 2. if we treat first two digits.
	// if first digit is 1 then second can be anything
	// if first digit is 2 then second can be 0 t0 6

	//10, 11, 12...... 19
	//20, 21, 22.......26
    // n-2 n-1
	if( start <= n-2 ){

		bool valid = false;

		if( str[start ] == '1' ) {
			valid = true;
		}else if ( str[start ] == '2' && str[start + 1] <= '6' ){
			valid = true;
		}

		if( valid ){

			if( start == n-2 ){
				total = total + 1;
			}else{
				// L 111
				total = total + countWays(str, start + 2);
			}
		}
	}

	return total;
}

long long int alphacode( string str ){
	int n = str.size();
	vector< long long int > ans( n, 0);
	if( str[0] >= '1' && str[0] <= '9' ){
		ans[0] = 1;
	}

	for(int i = 1; i<n; i++){
		// ith character
		if( str[i] >= '1' && str[i] <= '9' ){
			ans[i] += ans[i-1];
		}
		// i-1th and ith
		//   10(J) ,.........19       //  20 to 26
		if( str[i-1] == '1' || ( str[i-1] == '2' && str[i] <= '6' ) ){
			if(i==1){
				ans[i] += 1;
			}else{
				ans[i] += ans[i-2];
			}
		}
	}
	return ans[n-1];
}

int main(){

	string str = "25114";

	while(true){
		cin>>str;
		if(str[0]=='0') break;

		int ans = alphacode( str );
		cout << ans <<endl ;
	}
	return 0;
}

