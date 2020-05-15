#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,N,T,i,j,p,ans,temp;
	vector<ll> P;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		ans=0;
		for(j=0;j<N;++j)
		{
			cin>>p;
			P.push_back(p);
		}
		sort(P.begin(),P.end());
		reverse(P.begin(),P.end());
		for(j=0;j<N;++j)
		{
			temp=P[j]-j;
			if(temp<0)
				temp=0;
			ans=(ans+temp)%1000000007;
			
		}
		cout<<ans<<endl;;
		P.clear();
	}
	return 0;
}


