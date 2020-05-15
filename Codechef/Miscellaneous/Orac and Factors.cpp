#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll finFrst(ll A)
{
	ll i=sqrt(A),j,ans=-1,k;
	for(j=2;j<=i;++j)
	{
		if(A%j==0)
		{
			ans=j;
			
			break;
		}
			
	}
	if(ans==-1)
	{
		for(j=i;j>=2;--j)
		{
			if(A%j==0)
			{
				ans=A/j;
				
				break;
			}
		}
	}
	if(ans==-1)
		ans=A;
	//cout<<ans<<"c ";
	return ans;
}
int main()
{
	ll T,N,i,j,a,K,ans;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		//cin>>N>>K;
		scanf("%lld %lld",&N,&K);
		//cout<<finFrst(N)<<" ";
		N=N+finFrst(N);
		
		for(j=1;j<K;++j)
		{
		    //cout<<finFrst(N)<<" ";
			N=N+finFrst(N);
			
		}
		//cout<<N<<endl;
		printf("%lld\n",N);
	}
	return 0;
}

