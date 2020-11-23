#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main() {
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cont=0;
	    cin>>n;
	    vector<int> pi(n),cool(n);
	    for(int i=0;i<n;++i)
	    cin>>pi[i];

	    for(int i=0;i<n;++i)
	    cin>>cool[i];

	    sort(pi.begin(),pi.end());
	    sort(cool.begin(),cool.end());

	    for(int i=0;i<n;++i)
	    {

	        for(int j=0;j<n;++j)
	        {
	            if(cool[i]>=pi[j]  && pi[j])
	            {
	                pi[j]=0;
	                cont++;
	                break;
	            }

	        }
	    }

	    cout<<cont<<endl;
	}

	return 0;
}
