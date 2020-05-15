#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,mn,mx,k;
	vector<ll> A,B,C;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		for(j=0;j<N;++j)
		{
			cin>>a;
			A.push_back(a);
			B.push_back(0);
			C.push_back(1);
		}mx=0;mn=9;//cout<<"a";
		for(j=0;j<N-1;++j)
		{
			B[j]=A[j+1]-A[j];
		//	cout<<B[j]<<" ";
		}	
		//cout<<"a"<<endl;
		for(j=0;j<N-1;++j)
		{
			
			k=j;
			while(k<N-1 && B[k]<=2)
			{
				C[j]++;
				C[k+1]++;
				k++;
			}
			
		}
		
		sort(C.begin(),C.end());
		cout<<C[0]<<" "<<C[N-1]<<endl;
		A.clear();
		B.clear();
		C.clear();
	}
	return 0;
}

