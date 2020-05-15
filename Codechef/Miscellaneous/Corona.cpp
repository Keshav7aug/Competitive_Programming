#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;
int fnd(ll B[10], ll b, ll c)
{
	bool ans=1;
	for(int j=0;j<=c;++j)
	{
		if(B[j]==b)
		{
			ans=0;
			break;
		}
	}
	return ans;
}
ll fact(ll N)
{
	if(N==1)
		return 1;
	else
	{
		return N*fact(N-1);
	}
}
int main()
{
	long long int x,y,z,A[11][11],i,j,B[11],N;
	cin>>N;
	for(i=0;i<10;++i)
	{
		cin>>B[i];
		A[i][0]=B[i];
		for(j=1;j<10;++j)
		{
			cin>>A[i][j];
		}
	}
	x=N*(N-1)/2;
	for(i=0;i<10;++i)
	{
		
		for(j=1;j<10;++j)
		{
			x=x-fnd(B,A[i][j],i-1);
		}
	}
	cout<<x;

	
}
