#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a,b,c,N,T,i,j,ns;
	vector<ll> A,O,E;
	vector<bool> isP(1000004,true);
	
	cin>>T;
	for(i=0;i<T;++i)
	{
	    ns=0;
		cin>>N;
		if(N==1)
			cout<<1<<endl<<"1 1"<<endl;
		else if(N==2)
		    cout<<1<<endl<<"2 1 2"<<endl;
		else
		{   
		    a=4;ns=1;
		    b=1+((N-3)/2);
		    if(N%2==0)
		        printf("%lld\n",b+1);
		    else
		        printf("%lld\n",b);
			printf("3 1 2 3\n");
			
			for(j=a;j<N;j+=2)
			{
			    printf("2 %lld %lld\n",j,j+1);
			    
				ns++;
			}
			if(N%2==0)
			    printf("1 %lld\n",N);
		
			
		}
		A.clear();
	}
	return 0;
}


