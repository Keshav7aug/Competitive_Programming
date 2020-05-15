#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,Q,C,uS,nS,mT1,ans,k;
	vector<ll> A,B;
	string S;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>Q;
		
		cin>>S;
		sort(S.begin(),S.end());uS=0;nS=0;mT1=0;
		for(j=0;j<N;)
		{
			nS=1;
		    
			while(j<N && S[j]==S[++j])
			{
				nS++;
			}
			uS++;
			if(nS>1)
			    A.push_back(nS);
			//cout<<S[j-1]<<" "<<nS;
		}
		
		//cout<<endl<<"tot="<<uS<<"mT1="<<mT1;
		//cout<<endl;
		sort(A.begin(),A.end());
		ans=N-uS;
		B.push_back(ans);
		C=2;
		
		for(j=0;j<Q;++j)
		{
		    ans=N-uS;
			cin>>C;
			if(C==0)
			ans=N;
			else
			{
    			k=upper_bound(A.begin(),A.end(),C)-A.begin();
    			ans=0;
    			
    			for(;k<A.size();++k)
    			{
    			    ans+=A[k]-C;
    			}
			}
    		cout<<ans<<endl;
			
		}
		A.clear();
		B.clear();
	}
	return 0;
}

