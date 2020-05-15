#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,m,b,c,s,ans,nS,k;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>m;
		for(j=0;j<N;++j)
		{
			cin>>a;
			A.push_back(a);
		}
		sort(A.begin(),A.end());
		b=N/m;s=1;ans=0;
		nS=b*m;
		while(s<nS)
		{
			c=1;
			j=(s-1)*b;
			for(k=0;k<b;++k)
			{
				c+=A[k+j];
			}
			ans=(ans+s*c)%1000000007;
		}
		nS=nS-b;c=1;
		for(j=nS;j<N;++j)
		{
			c+=A[j];
		}
		ans=(ans+s*c)%1000000007;
		cout<<ans<<endl;
		A.clear();
	}
	return 0;
}

