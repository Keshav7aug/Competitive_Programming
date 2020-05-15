#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll;
ll gcd(int a, int b)
{ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  

}
int main()
{
	ll T,N,i,j,M,a,b,ans;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>M;
		b=1;
		for(j=0;j<N;++j)
		{
			cin>>a;
			b=(a*b)/gcd(a,b);
		}
		for(j=M;j>1;--j)
		{
			if(b%j!=0)
				break;
		}
		ans=j;
		cout<<ans<<endl;
	}
}

