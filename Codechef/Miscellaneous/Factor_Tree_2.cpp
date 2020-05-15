#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//#########The function vector taken from GeeksforGeeks###############
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
	ll a,b,c,N,T,i,j,x,y,u,v,k,Q,ansFlg,nF,Skm,counT,mz,zZz,tmp,mMm,l,Yu;
	vector<ll> A,CC,Prs,B,ans1,Acpy;
	vector<bool> V;
	
	
	
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N;
		ll Idea[N+2][N+2];
		vector<ll> C[N+3];
		for(j=0;j<N-1;++j)
		{
			cin>>x>>y;
			
			C[x].push_back(y);
			C[y].push_back(x);
			
		}
		for(j=1;j<=N;++j)
		{
		    
		    for(Yu=1;Yu<=N;++Yu)
		    {
		        Idea[j][Yu]=0;
		    }
		}
		for(j=0;j<N;++j)
		{
			cin>>a;
			A.push_back(a);
			Acpy.push_back(a);
		}
		for(k=0;k<N;++k)
		{
		    l=2;
 				if(A[k]%l==0)
 				    {
 				    counT=0;
 				    while(A[k]%l==0)
 			      {
 			            A[k]=A[k]/l;
 			            counT++;
 			      }//cout<<counT<<endl;
 			      nF=counT+1;
 			      
 			    }
 				
 				for( l=3;l<=sqrt(A[k]);l+=2)
 				{
 				    if(A[k]%l==0)
 				    {
 				       
 				       
 				       
 				            
 				    
 				    counT=0;
 				    while(A[k]%l==0)
 			      {
 			            A[k]=A[k]/l;
 			            counT++;
 			      }
 			      nF=nF*(counT+1)%1000000007;
 			    }
 				}
 				if(A[k]>1)
 				{
 				   nF=nF*2;
 				}
 				Idea[k+1][k+1]=nF;
		}
		for(j=1;j<=N;++j)
		{
		    
		    for(Yu=j+1;Yu<=N;++Yu)
		    {if(Idea[j][Yu]==0){
		        V.assign(N+1, false);
		        B.clear();	ans1.clear();ans.clear();
			    DFS(C,V,j,Yu,ans1);
			    B=ans;
			    for(k=0;k<B.size();++k){
 			    B[k]=Acpy[B[k]-1];}//cout<<endl;
 			for(k=0;k<B.size();++k)
 			{
 			    //cout<<B[k]<<"-> ";
 			    l=2;
 				if(B[k]%l==0)
 				    {
 				       
 				       if(find(Prs.begin(),Prs.end(), l)==Prs.end())
 				        Prs.push_back(l);
 				       
 				            
 				    
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
 				
 				for( l=3;l<=sqrt(B[k]);l+=2)
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
 				}nF=1;
 				for(ll phis=0;phis<CC.size();++phis)
 			{
 			    //cout<<Prs[k]<<" "<<CC[k]<<" ";
 			    // if(CC[k]==0)
 			    //     break;
 			    nF=(nF*(CC[phis]+1)%1000000007);
 			}
 			Idea[j][ans[k]]=nF;
 			Idea[ans[k]][j]=nF;
 			}
 			nF=1;
 			
 			Prs.clear();
 			CC.clear();
 			
 			//cout<<nF<<" ";
		    }}
		    //cout<<endl;
		}
// 		cout<<"start"<<endl;
// 		for(j=1;j<=N;++j)
// 		{
		    
// 		    for(Yu=1;Yu<=N;++Yu)
// 		    {
// 		        cout<<Idea[j][Yu]<<" ";
// 		    }
// 		    cout<<endl;
// 		}
// 		cout<<"hihihihihi"<<endl;
		cin>>Q;
		
		for(j=0;j<Q;++j)
		{
		    
			ansFlg=0;
			//cin>>u>>v;
			scanf("%lld%lld",&u,&v);
// 		
			nF=Idea[u][v];
			printf("%lld\n",nF%1000000007);
			B.clear();
			
			V.clear();
			CC.clear();
		}
		A.clear();
		Acpy.clear();
		//Idea.clear();
		for(k=0;k<N;++k)
			    C[k].clear();
			
	}
	return 0;
}


