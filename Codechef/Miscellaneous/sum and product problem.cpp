#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,N,T,i,j;
	vector<ll> A;
	string s;
	
	
		
		for(i=2;i<=97;++i)
		{
			cout<<"****"<<i<<"****"<<endl;
			for(j=2;j<=sqrt(i);++j)
			{
				if(i%j==0)
					cout<<j<<" X "<<i/j<<endl;
			}
			
		}
	
	return 0;
}


