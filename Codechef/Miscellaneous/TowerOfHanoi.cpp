#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long int ll;
void ToH(ll num,char S='S',char A='A',char D='D')
{
	if(num==1)
		cout<<S<<" "<<D<<endl;
	else
	{
		ToH(num-1,S,D,A);
		cout<<S<<" "<<D<<endl;
		ToH(num-1,A,S,D);
	}
}
int main()
{
	ll T,N,i,j;
	cin>>N;
	ToH(N);
}

