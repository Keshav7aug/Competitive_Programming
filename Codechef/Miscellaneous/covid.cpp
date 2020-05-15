#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,N,T,i,j,ans;
	vector<ll> A,pos;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		ans=1;
		for(j=0;j<N;++j)
		{
			cin>>a;
			//A.push_back(a);
			if(a==1)
				pos.push_back(j);
		}
		for(j=1;j<pos.size();++j)
		{
		   // cout<<pos[j]-pos[j-1]<<" ";
			if(pos[j]-pos[j-1]<6)
			{
				ans=0;
				break;
			}
		}
		if(ans==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
		pos.clear();
	}
	return 0;
}

