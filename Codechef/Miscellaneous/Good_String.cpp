#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,K,X,ans,k,maX;
	string s;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		k=0;
		cin>>s;
		cin>>K>>X;
		sort(s.begin(),s.end());
		cout<<s<<endl;
		A.insert(A.begin(),s.length(),0);
		for(j=1;j<s.length();++j)
		{
			if(s[j]!=s[j-1])
				k++;
			A[k]++;
		}
		maX=0;
		for(j=0;j<A.size();++j)
		{
			if(A[j]>X)
				maX+=A[j]-X;
			if(ans>K)
				break;
			maX+=A[j];
		}
		cout<<maX;
		A.clear();
		
	}
}

