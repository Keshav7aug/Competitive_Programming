#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,b,c,d,ans,z,y,A,B;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>A>>B;
		ans=A+B;
		a=A%10;
		b=A/10;
		c=B%10;
		d=B/10;
		z=10*(c+d)+a+b;
		y=10*(a+b)+c+d;
		if(ans<z)
			ans=z;
		if(ans<y)
			ans=y;
		cout<<ans<<endl;
		
	}
}

