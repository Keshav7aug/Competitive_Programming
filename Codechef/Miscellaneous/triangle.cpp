#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,b,c,ans,Q,k;
	double abc;
	vector<ll> X,Y;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>Q;
		for(j=0;j<N;++j)
		{
			cin>>a>>b;
			X.push_back(a);
			Y.push_back(b);
		}
		for(j=0;j<Q;++j)
		{
			ans=0;
			cin>>a>>b;
			for(k=0;k<N;++k)
			{
				if(Y[k]<=float((b-a)/2))
				{
				
					c=2*Y[k]-X[k];
					if(c+b==0)
						ans++;
					else if(c+a==0)
						ans++;
					else
					{
						if(((2*Y[k]-a)<X[k]) && ((2*Y[k]-b)>X[k]))
							ans++;
					}
				}
			}
			cout<<ans<<" ";
		}
		X.clear();
		Y.clear();
		cout<<endl;
	}
	return 0;
}

