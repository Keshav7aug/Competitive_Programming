#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,smi,ans,adD,sm,prev,inc;
	vector<ll> s;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		sm=1000000009;
		s.push_back(0);
		for(j=1;j<=N;++j)
		{
			//cin>>a;
			scanf("%lld",&a);
			s.push_back(a);
			if(a<sm)
			{
				smi=j;
				sm=a;
			}
		}
		ans=1;adD=smi;prev=s[smi];smi+=smi;inc=smi;
		for(j=smi;j<=N;j+=inc)
		{
			if(s[j]>prev)
			{
				ans+=1;
				prev=s[j];
				inc=j;
			}
		}
		printf("%lld\n",ans);
		s.clear();
	}
	return 0;
}

