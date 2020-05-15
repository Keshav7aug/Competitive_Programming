#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll> ans;
void DFS(vector<ll> v[], vector<bool> vis, ll x, ll y, vector<ll> stack) 
{ 
    stack.push_back(x); 
  
    if (x == y) 
	{ 
		ans=stack;
    } 
    else
    {
		
	    vis[x] = true; 
	  
	    int flag = 0; 
	    
	    if (!v[x].empty()) { 
	    
	        for (int j = 0; j < v[x].size(); j++) { 
	            
				
	            if (vis[v[x][j]] == false) { 
	                DFS(v, vis, v[x][j], y, stack); 
	                
	                flag = 1; 
	            } 
	        } 
	    } 
	    if (flag == 0) { 
	  		
	        
	        stack.pop_back(); 
	    }
	}
    
} 
int main()
{
	ll a,b,c,N,T,i,j,x,y,u,v,k,Q,ansFlg,nF,Skm,counT,mz,zZz,tmp,mMm;
	vector<ll> A,CC,Prs,B,ans1;
	vector<bool> V;
	
	
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		vector<ll> C[N+3];
		for(j=0;j<N-1;++j)
		{
			cin>>x>>y;
			
			C[x].push_back(y);
			C[y].push_back(x);
		}
		for(j=0;j<N;++j)
		{
			cin>>a;
			A.push_back(a);
		}
		cin>>Q;
		
		for(j=0;j<Q;++j)
		{
		    V.assign(N+1, false);
			ansFlg=0;
			//cin>>u>>v;
			scanf("%lld%lld",&u,&v);

			B.clear();
			ans1.clear();
			ans.clear();
			DFS(C,V,u,v,ans1);
			B=ans;
 			
			counT=0;
			
			for(k=0;k<B.size();++k)
 			    B[k]=A[B[k]-1];
 			
			 for(k=0;k<B.size();++k)
 			{
 			    
 				for(ll l=2;l<=sqrt(B[k]);++l)
 				{
 				    if(B[k]%l==0)
 				    {
 				      
 				       if(find(Prs.begin(),Prs.end(), l)==Prs.end())
 				        Prs.push_back(l); 
 				    
 				    counT=0;
 				    while(B[k]%l==0)
 			      	{
 			            B[k]=B[k]/l;
 			            counT++;
 			      	}
 			      
 			      	zZz=find(Prs.begin(),Prs.end(), l)-Prs.begin();
 			      	if(zZz<CC.size())
 			         	CC[zZz]+=counT;
 			      	else
 			        	CC.push_back(counT);
 			    
 			    	}
 				}
 				if(B[k]>1)
 				{
 				   	if(find(Prs.begin(),Prs.end(), B[k])==Prs.end())
 				   		Prs.push_back(B[k]);
 				            
 				    counT=1;
 				    zZz=find(Prs.begin(),Prs.end(), B[k])-Prs.begin();
 			      	if(zZz<CC.size())
 			        	 CC[zZz]+=counT;
 			      	else
 			        	CC.push_back(counT);
 			    
 				}
 			}
 			nF=1;
 			
 			for(k=0;k<CC.size();++k)
 			{
 				nF=(nF*(CC[k]+1)%1000000007);
 			}
           
			Prs.clear();
			
			printf("%lld\n",nF%1000000007);
			B.clear();
			
			V.clear();
			CC.clear();
		}
		A.clear();
		for(k=0;k<N;++k)
			    C[k].clear();
			
	}
	return 0;
}


