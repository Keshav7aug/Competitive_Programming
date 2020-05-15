#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,S;
	vector<ll> P,D,A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>S;
		for(j=0;j<N;++j)
		{
			cin>>a;
			P.push_back(a);
		}
		for(j=0;j<N;++j)
		{
			cin>>a;
			if(a==0)
				D.push_back(P[j]);
			else
				A.push_back(P[j]);
		}
		sort(D.begin(),D.end());
		sort(A.begin(),A.end());
		if((S+D[0]+A[0])>100)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}

