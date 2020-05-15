#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll TT[327680][107];

void trTa(ll a, ll b, ll c)
{
	ll j,val=-1;
	for(j=0;j<c;++j)
	{
		if((j%b)==0)
			val*=-1;
		TT[j][a]=val;
		
	}
}
int main()
{
	ll T,N,i,j,a,h[1007][1007],fl[1007][1007],k,x[204],y[205],p[205],p_[205],V,b,t,z,H,W,Vchk,tmp,vTC,l;
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
				fl[j+1][k+1]=-1001;
			}
		}
		for(j=0;j<N;++j)
		{
			cin>>x[j]>>y[j]>>p[j];
			fl[x[j]][y[j]]=p[j];
			p_[j]=p[j];
		}V=0;
		for(j=0;j<N;++j)
		{
			a=x[j];b=y[j];
			//cout<<h[a][b]<<" ";
			if(h[a][b]>=0)
			{
				A.push_back(1);
				//V+=(h[a][b]*p[j]);
			}
			else
			{
			   // cout<<"dhf ";
				A.push_back(0);
				B.push_back(j);
			}//cout<<"lkkk";
			
		}
		t=pow(2,B.size());
		z=1;Vchk=-2147483647;
		
		for(j=0;j<B.size();++j)
		{
			trTa(j,z,t);
			z*=2;
		}//cout<<"t="<<t<<"b="<<B.size()<<" "<<endl;
		//cout<<t<<endl;
		for(k=0;k<t;++k)
		{
		    
			for(l=0;l<B.size();++l)
		    {
		        p_[B[l]]=p[B[l]]*TT[k][l];
	            fl[x[B[l]]][y[B[l]]]=p_[B[l]];
	            //cout<<p_[B[l]]<<" ";
		    }l=0;//cout<<endl;
		    tmp=0;l=0;
				for(j=0;j<N;++j)
				{
				    
					a=x[j];b=y[j];
					z=fl[a][b];
					if(A[j]!=0)
					{
					    tmp+=h[a][b]*p_[j];
					    if(a<H && fl[a+1][b]!=-1001)
				            tmp+=fl[a+1][b]*z;
			            if(b<W && fl[a][b+1]!=-1001)
				            tmp+=fl[a][b+1]*z;
					}
					else
					{
					    tmp+=h[a][b]*p_[j];
					    if(a<H && fl[a+1][b]!=-1001)
				            tmp+=fl[a+1][b]*z;
			            if(b<W && fl[a][b+1]!=-1001)
				            tmp+=fl[a][b+1]*z;
					}
					
				}
				//cout<<tmp<<" "; 
				if(tmp>Vchk)
				{
					Vchk=tmp;
					vTC=k;
				}
			
		}


		for(j=0;j<B.size();++j)
		{
			
			A[B[j]]=TT[vTC][j];
			
		}
		
		cout<<Vchk<<endl;
		for(j=0;j<N;++j)
		{
			cout<<A[j]<<" ";
		}
		cout<<endl;
		A.clear();
		B.clear();
		
	}
	return 0;
}

