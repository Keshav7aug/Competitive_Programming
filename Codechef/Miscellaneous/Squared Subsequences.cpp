#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
	ll a,b,c,N,T,i,j,sum,diff,t,k,l,ans,fA,d,ans1,pos,pos1,od=0,Ef,pos2;
	vector<ll> A,B;
	//cin>>T;
	scanf("%lld",&T);
	for(i=0;i<T;++i)
	{
		
		scanf("%lld",&N);
		
		for(j=0;j<N;++j)
		{
			
			scanf("%lld",&a);
			A.push_back(abs(a));
		}
		ans=0;t=0;
		a=0;b=0;d=1;pos=0;od=0;Ef=0;pos1=0;pos2=0;
		for(j=0;j<N;++j)
		{
		    if(A[j]%4==0)
		    {
		        
		        ans=ans+((N-j)*(j-pos2+1));
		        pos2=j+1;
		        
		        b=0;d=0;Ef=0;a=0;
		      
		        
		    }
		    else if(A[j]%2!=0)
		    {
		        
		        a++;
		        ans+=a;
		        od=1;
		    }
		    else
		    {
		        od=0;
		        a=0;
		        b++;
		        pos1=pos;
		        pos=j;Ef=1;
		        if(b==2)
		         {
        	        ans+=(N-j)*(pos1-pos2+1);
        	        
        	        pos2=pos1+1;
        	        b=1;
        	       
        	        d=0;
		        }
		    }
		    
		    
		}
		a=0;
		ans1=0;
		
		printf("%lld\n",ans);
		A.clear();
		B.clear();
	}
	return 0;
}


