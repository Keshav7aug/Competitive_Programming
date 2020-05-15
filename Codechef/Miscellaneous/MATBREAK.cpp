#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pOw(ll A, ll p)
{
	ll j,ans=1;
	for(j=0;j<p;++j)
	{
		ans=ans*A%1000000007;
	}
	return ans;
}
int main()
{
	ll T,N,i,j,a,P[100000],A,p,ans,Xa;
	//vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>A;
		p=1;
		P[0]=A;
		Xa=2;
		for(j=1;j<N;++j)
		{
			p=(2*j)+1;
			P[j]=pOw(P[j-1]*Xa,p)%1000000007;
			Xa=P[j-1]*Xa;
		}
		ans=P[0];
		for(j=1;j<N;++j)
		{
			ans+=P[j];
		}
		cout<<ans<<endl;
	}
	return 0;
}

