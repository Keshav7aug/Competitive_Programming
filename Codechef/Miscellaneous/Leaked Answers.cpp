#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,N,T,i,j,K,k,M,Qn,l,ans,MaAns;
	vector<ll> A,B,D;
	vector<bool> C;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>M>>K;
		C.insert(C.begin(),K,0);
		for(j=0;j<N;++j)
		{
		    B.insert(B.begin(),M,0);
		    
			for(k=0;k<K;++k)
			{
			    cin>>a;
			    D.push_back(a);
				B[a-1]++;
			}
			//sort(A.begin(),A.end());
			a=0;b=1;c=0;
			for(k=0;k<M;++k)
			{
				if(a<B[k])
				{
				    a=B[k];
				    //b=k+1;
				}
			}
			for(k=0;k<M;++k)
			{
				if(a==B[k])
				{
				    A.push_back(k+1);
				}
			}
			MaAns=0;
			b=A[0];
			for(k=0;k<A.size();++k)
			{
			    ans=0;
			    for(l=0;l<K;++l)
			    {
			        if(A[k]==D[l] && C[l]==0)
			            ans++;
			    }
			    if(ans>MaAns)
			    {
			        b=A[k];
			        MaAns=ans;
			    }
			        
			}
			for(k=0;k<K;++k)
			{
			    if(b==D[k])
			        C[k]=1;
			}
			cout<<b<<" ";
			B.clear();
			A.clear();
			D.clear();
			
		}
		C.clear();
		cout<<endl;
	}
	return 0;
}


