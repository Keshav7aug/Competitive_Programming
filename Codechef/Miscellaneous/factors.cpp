#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a;
	vector<ll> A;
	cin>>T;
	for(j=1;j<T/2;++j)
	{
		if(T%j==0)
		cout<<j<<" X "<<T/j<<endl;
	}
	return 0;
}

