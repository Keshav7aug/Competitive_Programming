#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
	ll a,b,c,N,T,i,j,D,ans,k;
	vector<ll> A;
	string s,u;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		cin>>s;
		
		cin>>D;
		for(j=0;j<D;++j)
		{
			cin>>a;
			A.push_back(a);
			if(s[a-1]=='1')
				s[a-1]='-1';
			else
				s[a-1]='-2';
			u=s;
			if(s[0]=='1')
			{
				if(s[1]=='0')
					u[1]=='1';	
			}
					
			for(k=1;k<N-1;++k)
			{
				if(s[k]=='1')
				{
					if(s[k-1]=='0')
						s[k-1]=='1';
					if(s[k+1]=='0')
						s[k+1]=='1';
				}
				else if(s[k]==-'-1')
				{
					if(s[k+1]=='0')
						s[k+1]=='1';
				}
			}
			if(s[k]=='1')
			{
				if(s[k-1]=='0')
					u[k-1]=='1';	
			}
			
			ans=0;
			cout<<s;
			s=u;
			for(k=0;k<N;++k)
			{
			    //cout<<s[k];
				if(s[k]=='1')
					ans++;
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}

