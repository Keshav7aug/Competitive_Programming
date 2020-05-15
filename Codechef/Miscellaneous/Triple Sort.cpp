#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,K,k,aD,cN,tmp,tp1,tp2,tp3,nI,t,flg2,i1,i2,i3,v1,v2,v3;
	bool flg;
	vector<ll> p,x,y,z,p_;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>K;
		p.push_back(0);
		for(j=0;j<N;++j)
		{
			cin>>a;
			p.push_back(a);
		}flg=1;nI=0;p_=p;
		tp1=1;flg=true;
		for(j=1;j<=N;)
		{
		    //cout<<nI<<" ";
		  //  if(j==p[p[j]] && j<N)
		  //      j++;
		  
			while(j<N && (p[j]==j ))
			{
			    j++;
			}
			while(j>1 && p[j]==j)
 			{
 			    j--;
 			}
			if(p[j]==j || j>N)
			{ 
			    //flg=false;
			    break;
			}
			x.push_back(j);i1=j;
			i2=p[j];
			y.push_back(i2);
			if(p[p[j]]==j || (p[p[j]]==p[j]))
			{
			    j++;
			    
    			while(j<N && (p[j]==j || j==y[nI]))
    			{
    			    j++;
    			}
    			while(j>1 && (p[j]==j || j==y[nI]))
    			{
    			    j--;
    			}
    			if(j==y[nI] || j==x[nI] ||j>N)
    			{
    			    flg=false;
    			    break;
    			}
    			i3=j;
    			z.push_back(j);
    			
    			
    			
			}
			else
			{
			    i3=p[p[j]];
			    z.push_back(i3);
			
			    
			}
			//cout<<x[nI]<<" "<<y[nI]<<" "<<z[nI]<<endl;
			v1=p[i1];v2=p[i2];v3=p[i3];
			p[i2]=v1;p[i3]=v2;p[i1]=v3;

 		    if(p[z[nI]]!=z[nI])
 		    {
 		        j=i3;
 		        if(j==p[p[j]] && j<N)
 		            j++;
 		        
 		    } 
 			 else if(p[x[nI]]!=x[nI])
 			 {
 			     j=i1;
 			     if(j==p[p[j]])
 			     {
     			    
     			        j++;
 			     }
 			    //  else
 			    //      j=i1;
 			 }
 			     
 			else
 			{
 			    j=i1+1;
 			    
 			}
 			
			nI++;
			if(nI>=K)
			    break;
		}
		{
		    if(!is_sorted(p.begin(),p.end()))
		    {
		        for(j=1;j<=N;)
		{
		    //cout<<nI<<" ";
		  //  if(j==p[p[j]] && j<N)
		  //      j++;
		  
			while(j<N && (p[j]==j ))
			{
			    j++;
			}
// 			while(j>1 && p[j]==j)
//  			{
//  			    j--;
//  			}
			if(p[j]==j || j>N)
			{ 
			    //flg=false;
			    break;
			}
			x.push_back(j);i1=j;
			i2=p[j];
			y.push_back(i2);
			if(p[p[j]]==j || (p[p[j]]==p[j]))
			{
			    j++;
			    
    			while(j<N && (j==y[nI]))
    			{
    			    j++;
    			}
    // 			while(j>1 && ( j==y[nI]))
    // 			{
    // 			    j--;
    // 			}
    			if(j==y[nI] || j==x[nI] ||j>N)
    			{
    			    flg=false;
    			    break;
    			}
    			i3=j;
    			z.push_back(j);
    			
    			
    			
			}
			else
			{
			    i3=p[p[j]];
			    z.push_back(i3);
			
			    
			}
			//cout<<x[nI]<<" "<<y[nI]<<" "<<z[nI]<<endl;
			v1=p[i1];v2=p[i2];v3=p[i3];
			p[i2]=v1;p[i3]=v2;p[i1]=v3;

 		    if(p[z[nI]]!=z[nI])
 		    {
 		        j=i3;
 		        if(j==p[p[j]] && j<N)
 		            j++;
 		        
 		    } 
 			 else if(p[x[nI]]!=x[nI])
 			 {
 			     j=i1;
 			     if(j==p[p[j]])
 			     {
     			    
     			        j++;
 			     }
 			    //  else
 			    //      j=i1;
 			 }
 			     
 			else
 			{
 			    j=i1+1;
 			    
 			}
 			
			nI++;
			if(nI>=K)
			    break;
		}
		    }
		}
		if(is_sorted(p.begin(),p.end()))
		{
		    
			printf("%lld\n",nI);
			for(j=0;j<nI;++j)
			    printf("%lld %lld %lld\n",x[j],y[j],z[j]);
		}
		else
		{
    		printf("-1\n");
		}
	    
		//cout<<"----end----"<<endl;	
// 		for(j=0;j<=N;++j)
// 			printf("%lld%  ",p[j]);
		//cout<<endl;
		x.clear();
		y.clear();
		z.clear();
		p.clear();
		p_.clear();
	}
	return 0;
}

