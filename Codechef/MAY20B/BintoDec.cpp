#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;
string DtB(ll a)
{
    string ans;
    int b;
    char A[]={'0','1'};
    while(a>0)
    {
        b=a%2;
        ans.push_back((A[b]));
        a=a/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
ll BtD(string A)
{
	ll ans,j=A.size()-1,k=0;ans=0;
	for(;j>=0;--j)
	{
		
		if(A[j]=='1')
			ans+=pow(2,k);
		
		k++;
	}
	return ans;
}
int main()
{
	ll T,N,i,j,a;
	vector<ll> A;
	T=50;
	for(i=0;i<T;++i)
	{
		cin>>a;
		cout<<" "<<DtB(a)<<" "<<BtD(DtB(a))<<endl;
	}
	return 0;
}

