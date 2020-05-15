#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,n,i,j,a,k,ans,Sz;
	vector<ll> A,B;
	cin>>T;
	for(i=0;i<T;++i)
	{
		ans=0;
		cin>>n>>k;
		for(j=0;j<n;++j)
		{
			cin>>a;
			A.push_back(a);
			ans+=a;
		}
		for(j=0;j<n;++j)
		{
			cin>>a;
			B.push_back(a);
		}
		sort(B.begin(),B.end());
		sort(A.begin(),A.end());
		Sz=B.size();
		for(j=0;j<k;++j)
		{
			if(A[j]<B[Sz-j-1])
			{
				ans=ans+B[Sz-j-1]-A[j];
				//cout<<ans<<" ";
			}
			else
				break;
		}
		printf("%lld\n",ans);
		B.clear();
		A.clear();
	}
	return 0;
}

