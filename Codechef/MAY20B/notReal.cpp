#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll T,N,i,j,a,h[1007][1007],fl[1007][1007],k,x[204],y[205],p[205],p_[205],V,b,t,z,H,W,Vchk,tmp,vTC,l,pos[1007][1007];
	vector<ll> A,B;
	
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>H>>W>>N;
		//cout<<"N="<<N<<endl;
		for(j=0;j<H;++j)
		{
			for(k=0;k<W;++k)
			{
				cin>>h[j+1][k+1];
				fl[j+1][k+1]=0;
			}
		}
		for(j=0;j<N;++j)
		{
			cin>>x[j]>>y[j]>>p[j];
			fl[x[j]][y[j]]=p[j];
			pos[x[j]][y[j]]=j;
			p_[j]=p[j];
		}
		for(j=H;j>0;++j)
		{
			V=0;
			for(k=W;k>0;++k)
			{
				
			}
		}
		cout<<endl;
		A.clear();
		B.clear();
		
	}
	return 0;
}

