#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll> ans;
void DFS(vector<ll> v[], vector<bool> vis, ll x, ll y, vector<ll> stack) 
{ 
    stack.push_back(x); 
  
    //cout<<x<<" ";
    if (x == y) { 
  
        
        
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
	vector<ll> A,CC,Prs,B,ans1,Nconn,Nov,nFf;
	vector<bool> V;
	
	
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		vector<ll> C[N+3];
		Nconn.assign(N+3,0);
		for(j=0;j<N-1;++j)
		{
			cin>>x>>y;
			
			C[x].push_back(y);
			C[y].push_back(x);
			Nconn[x]++;
			Nconn[y]++;
			
		}
		for(j=0;j<N;++j)
		{
			cin>>a;
			A.push_back(a);
			if(Nconn[j+1]==1)
			    Nov.push_back(j+1);
		}
		B.clear();	ans1.clear();ans.clear();
		V.assign(N+1, false);
		DFS(C,V,Nov[0],Nov[1],ans1);
		B=ans;
		Nov.clear();
		Nov.assign(N+1,0);
		for(j=0;j<B.size();++j)
		{
		    Nov[B[j]]=j;
		}
		for(k=0;k<B.size();++k)
 			    B[k]=A[B[k]-1];
 			for(k=0;k<B.size();++k)
 			{
 			    //cout<<B[k]<<"-> ";
 				
 				mMm=sqrt(B[k]);
 				for(ll l=2;l<=sqrt(B[k]);++l)
 				{
 				    if(B[k]%l==0)
 				    {
 				       // cout<<"l="<<l<<"zzz=";
 				       // mz=Prs.size()-1;
 				       // while(mz>0 && Prs[mz]>l)
 				       //     mz--;
 				       
 				       //cout<<"mz="<<" L="<<l;
 				       if(find(Prs.begin(),Prs.end(), l)==Prs.end())
 				        Prs.push_back(l);
 				       //if(mz==-1 || Prs[mz]!=l)
 				       //{
 				       //    Prs.insert(Prs.begin()+mz+1,l);
 				       //    if((mz+1)>=CC.size())
 				       //    {
 				       //        CC.push_back(0);
 				       //    }
 				       //    else
 				       //    {
 				       //        CC[]
 				       //        CC[mz+1]=0;
 				       //    }
 				       //}
 				            
 				    
 				    counT=0;
 				    while(B[k]%l==0)
 			      {
 			            B[k]=B[k]/l;
 			            counT++;
 			      }//cout<<counT<<endl;
 			      
 			      zZz=find(Prs.begin(),Prs.end(), l)-Prs.begin();
 			      if(zZz<CC.size())
 			         CC[zZz]+=counT;
 			      else
 			        CC.push_back(counT);
 			    //cout<<zZz<<"count="<<CC[zZz]<<endl;
 			    }
 				}
 				if(B[k]>1)
 				{//cout<<"l="<<B[k]<<" zZzz";
 				   //  mz=Prs.size()-1;
 				   //     while(mz>0 && Prs[mz]>B[k])
 				   //         mz--;
 				       
 				   //        //cout<<"mz="<<B[k];
 				   //    if(mz==-1 || Prs[mz]!=B[k])
 				   //         Prs.insert(Prs.begin()+mz+1,B[k]);
 				   if(find(Prs.begin(),Prs.end(), B[k])==Prs.end())
 				   Prs.push_back(B[k]);
 				            
 				    counT=1;
 				    zZz=find(Prs.begin(),Prs.end(), B[k])-Prs.begin();
 			      if(zZz<CC.size())
 			         CC[zZz]+=counT;
 			      else
 			        CC.push_back(counT);
 			    //cout<<zZz<<" count"<<CC[zZz]<<endl;
 			         //CC[lower_bound(Prs.begin(),Prs.end(), B[k])-Prs.begin()]+=counT;
 				}
 				nF=1;//cout<<endl;
 			
 			for(ll m=0;m<CC.size();++m)
 			{
 			    //cout<<Prs[k]<<" "<<CC[k]<<" ";
 			    // if(CC[k]==0)
 			    //     break;
 			    nF=(nF*(CC[m]+1)%1000000007);
 			    
 			    
 			}
 			nFf.push_back(nF);
 			cout<<nF<<" ";
 			}
 			
		cin>>Q;
		
		for(j=0;j<Q;++j)
		{
		   
			ansFlg=0;
			cin>>u>>v;
 			a=Nov[u];
 			b=Nov[v];
 			if(a==b)
 			    nF=nFf[a];
 			else if(a<b)
 			    nF=nFf[b]-nFf[a];
 			else
 			    nF=nFf[a]-nFf[b];
           
			
			
			cout<<nF%1000000007<<endl;
		
		}
			B.clear();
			
			V.clear();
			CC.clear();
		A.clear();
		Prs.clear();
		Nov.clear();
		Nconn.clear();
		nFf.clear();
		for(k=0;k<N;++k)
			    C[k].clear();
			
	}
	return 0;
}


