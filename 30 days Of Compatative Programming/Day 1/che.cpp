#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)	{
	    int n,sum=0;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
                int m=0;
	        for(int j=0;i<=i;j++){

             cout<<i<<j<<endl;
                cin>>a[i][j];
            if(a[i][j]>m){
                m=a[i][j];
            }
            }
            sum+=m;

	    }
	    cout<<sum;

	    }

	return 0;
}
