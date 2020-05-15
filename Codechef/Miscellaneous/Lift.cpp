#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,cur,Q,ans,b;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>Q;
		cur=0;
		for(j=0;j<Q;++j)
		{
			cin>>a>>b;
			ans=abs(a-cur)+abs(b-a)+ans;
			cur=b;
		}
		cout<<ans<<endl;
	}
	return 0;
}

