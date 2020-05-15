#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,ans=0;
	string R,S;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>S>>R;
		ans=0;
		for(j=0;j<S.size();++j)
		{
			if(S[j]!=R[j])
				ans++;
		}
	}
	return 0;
}

