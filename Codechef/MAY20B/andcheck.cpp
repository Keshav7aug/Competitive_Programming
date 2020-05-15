#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,k,l,nU;
	vector<ll> A,B;
	for(T=0;T<100;++T)
	{
		A.clear();
		
	cout<<endl<<"+++++++++++++"<<T<<"+++++++++++++++++++++"<<endl;nU=0;
	for(i=0;i<=T;++i)
	{
		a=j;
		j=T&i;
		A.push_back(j);
	}
	for(j=0;j<A.size();++j)
	{
		if(A[j]!=-987)
		{nU++;
			cout<<A[j]<<" "<<j<<" ";
			for(k=j+1;k<A.size();++k)
			{
				if(A[k]==A[j])
				{
					cout<<k<<" ";
					A[k]=-987;
				}
					
			}
			cout<<endl;
		}
	}
	cout<<endl<<endl<<"|||||||||||||||||||"<<nU<<"||||||||||||||||||||||||||";
	B.push_back(nU);
	}j=0;cout<<endl<<endl;
	for(i=0;i<B.size();++i)
	{
		if(i==pow(2,j))
		{
			cout<<"||||||"<<j<<"||||||"<<pow(2,j)<<"||||||||||||"<<endl;
			j++;
		}
		cout<<i<<" "<<B[i]<<endl;
	}
	return 0;
}

