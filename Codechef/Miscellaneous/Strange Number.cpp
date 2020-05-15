#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime_facts(ll N)
{
	ll i,ans=0,L=N;
	
	while(N%2==0)
	{
		N=N/2;
		ans++;
	}
	for(i=3;i<=sqrt(L);i+=2)
	{
		
		while(N%i==0)
		{
			N=N/i;
			ans++;
		}
	}
	if(N>2)
	    ans++;
	return ans;
}
bool isPrime(ll a)
{
	bool ans=1;
	
	if(a==2)
		ans=1;
	else
	{
		for(ll i=2;i<=sqrt(a);++i)
		{
			if(a%i==0)
			{
			    
				ans=0;
				break;	
			}	
		}	
	}
	return ans;
	
}
int main()
{
	ll a,b,c,N,T,i,j,X,K;
	vector<ll> A;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>X>>K;
		if(pow(2,K)>X)
			cout<<0;
		else
		{
		    if(K==1)
		        cout<<1;
    		else if(K==2)
    		{
    		    
    			cout<<!isPrime(X);
    		}
    		else
    		{
    		    if(prime_facts(X)>=K)
			        cout<<1;
		    	else
			        cout<<0;
		    }
    	}
		
		cout<<endl;
	}
	return 0;
}


