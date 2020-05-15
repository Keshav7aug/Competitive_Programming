#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,X,Y,L,R,Z,ans,t;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>X>>Y>>L>>R;
		if(X==Y)
		    cout<<X<<endl;
		else
		{
		    j=X|Y;
    		cout<<j<<endl;
		}
	}
	return 0;
}

