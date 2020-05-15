#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,N,T,i,j,k;
	vector<ll> A;
	for(i=2;i<100;++i)
 			{
 				k=i;
 			    cout<<k<<"-> ";
 				
 				
 				for(ll l=2;l<=sqrt(k);++l)
 				{
 				    if(k%l==0)
 				    {
 				        cout<<l<<" ";
 				    }
 				    
 				    while(k%l==0)
 			      {
 			            k=k/l;
 			            
 			      }
 			     
 				}
 				if(k>1)
 				{
 				    cout<<k;
 				}
 				cout<<endl;
 			}
}


