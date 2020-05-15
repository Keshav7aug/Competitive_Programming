#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T,N,i,j,a,K,k,aD,cN,tmp,tp1,tp2,tp3,nI,t,flg2,i1,i2,i3,v1,v2,v3,khz,l,ii,m;
	bool flg;
	vector<ll> p,x,y,z,p_,B,Fp,O,E;
	cin>>T;
	for(i=0;i<T;++i)
	{
		cin>>N>>K;
		p.push_back(0);
		vector<ll> A[N];B.push_back(0);
		for(j=0;j<N;++j)
		{
			cin>>a;
			p.push_back(a);
			B.push_back(0);
		}flg=1;nI=0;p_=p;
		tp1=1;flg=true;
		j=1;l=0;
		while(p[j]==j && j<N)
		    j++;
		    //cout<<"hi";
		    if(p[j]!=j){
		        A[0].push_back(j);k=j;l=0;v1=0;B[1]=1;
		 while(v1<=N && l<=N)
		 {
		     //cout<<j<<"b";
			 flg=false;
		     do
		       {
		    //	cout<<p[j]<<" ";
		        A[l].push_back(p[j]);
		        B[p[j]]=1;
		        j=p[j]; 
		        flg=true;
		        
		    }while(j<=N && p[j]!=k && p[j]!=j && j!=p[p[j]]);
			//cout<<endl;
		    j=A[l][0]+1;
		    while(j<N && (j==p[j] || B[j]==1))
		        j++;
		    k=j;
		    
		   // cout<<"j="<<j<<" "<<B[j]<<endl;;
		  // cout<<A[l].size()<<" ";
		  if(A[l].size()==2)
		        Fp.push_back(l);
		 else if(A[l].size()%2==0)
		        E.push_back(l);
		  else
		        O.push_back(l);
		  v1+=A[l].size();
		  l++;
		    if(j==p[j] || B[j]==1)
		    	break;
		    
		    
		    
		    
		  //  if(flg)
		  //  l++;
		    A[l].push_back(j);B[j]=1;
		 }}
//		  for(j=0;j<=l;++j)
//		  {
//		      for(k=0;k<A[j].size();++k)
//		      {
//		          cout<<A[j][k]<<"->";
//		      }
//		      cout<<endl;
//		  }
		  //cout<<"aa gaya";
		  
		 ii=0;nI=0;//cout<<"L="<<Fp.size()<<endl;
		 for(m=0;m<O.size();++m)
		 {
		     j=O[m];
		     khz=A[j].size();
		     i1=A[j][0];
		     for(k=1;(k+1)<khz;)
    		      {
    		          
    		          i2=A[j][k];
    		          k++;
    		          i3=A[j][k];
    		          k++;
    		          x.push_back(i1);
    		          y.push_back(i2);
    		          z.push_back(i3);
    		          v1=p[i1];v2=p[i2];v3=p[i3];
    			      p[i2]=v1;p[i3]=v2;p[i1]=v3;
    			      //cout<<i1<<" "<<i2<<" "<<i3<<endl;  //////
    			    nI++;
    			     //cout<<nI<<" ";
    		      }
		 }k=1;
		 for(m=0;m<E.size();)
		  {
		      j=E[m];
		      khz=A[j].size();
		      if(khz>0)
		      {
    		      
    		        i1=A[j][0];
    		      	//k++;
    		       //cout<<i1<<"x";
    		      //khz=A[j].size();
    		      //if(khz%2==0)
    		      
    		      for(;(k+1)<khz;)
    		      {
    		          
    		          i2=A[j][k];
    		          k++;
    		          i3=A[j][k];
    		          k++;
    		          x.push_back(i1);
    		          y.push_back(i2);
    		          z.push_back(i3);
    		          v1=p[i1];v2=p[i2];v3=p[i3];
    			      p[i2]=v1;p[i3]=v2;p[i1]=v3;
    			      //cout<<i1<<" "<<i2<<" "<<i3<<endl;  ////////////////////////////////////////////////
    			    nI++;
    			     //cout<<nI<<" ";
    		      }
    		      //cout<<"a"<<endl;
    		     
    		     i1=A[j][khz-1];
    		     i2=A[j][0];
    		     m++;
    		     if(m>=E.size())
    		        break;
    		     j=E[m];
    		     i3=A[j][0];
    		     //cout<<i1<<" "<<i2<<" "<<i3<<endl; ////////////////////////////////////////////////
    		     x.push_back(i1);y.push_back(i2);z.push_back(i3);
    		     v1=p[i1];v2=p[i2];v3=p[i3];
    		     p[i2]=v1;p[i3]=v2;p[i1]=v3;
    		     nI++;
    		     i2=i1;
    		     i1=i3;
    		     i3=A[j][1];
    		    // cout<<i1<<" "<<i2<<" "<<i3<<endl; ///////////////////////////////////////////////////
    		     x.push_back(i1);y.push_back(i2);z.push_back(i3);
    		     v1=p[i1];v2=p[i2];v3=p[i3];
    		     p[i2]=v1;p[i3]=v2;p[i1]=v3;
    		     nI++;
    		     k=2;
    		     
		    }
		      
		  }m=0;
		  //cout<<"hi";
		  if(E.size()%2!=0 && E.size()!=0 && Fp.size()!=0)
		  {
		  	
			
				
			
			i3=A[Fp[m]][1];
			//cout<<i1<<" "<<i2<<" "<<i3<<endl; ////////////////////////////////////////////
			x.push_back(i1);y.push_back(i2);z.push_back(i3);
			v1=p[i1];v2=p[i2];v3=p[i3];
			p[i2]=v1;p[i3]=v2;p[i1]=v3;
			nI++;
			i2=i1;
			i1=i3;
			i3=A[Fp[m]][0];
			//cout<<i1<<" "<<i2<<" "<<i3<<endl; //////////////////////////////////////////////
			x.push_back(i1);y.push_back(i2);z.push_back(i3);
			v1=p[i1];v2=p[i2];v3=p[i3];
			p[i2]=v1;p[i3]=v2;p[i1]=v3;
			nI++;
			m=1;
		  	
		  }
		  for(;m<Fp.size();)
		  {
		  	//cout<<"hi";
		  		j=Fp[m];
		  		i1=A[j][1];
		  		i2=A[j][0];
		  		m++;
		  		if(m>=Fp.size())
		  			break;
		  		j=Fp[m];
		  		i3=A[j][1];
		  		//cout<<i1<<" "<<i2<<" "<<i3<<endl; /////////////////////////////////////////////////
		  		x.push_back(i1);y.push_back(i2);z.push_back(i3);
				v1=p[i1];v2=p[i2];v3=p[i3];
				p[i2]=v1;p[i3]=v2;p[i1]=v3;
				nI++;
				i2=i1;
    		    i1=i3;
    		    i3=A[j][0];
    		    //cout<<i1<<" "<<i2<<" "<<i3<<endl;  ////////////////////////////////////////////////
    		    x.push_back(i1);y.push_back(i2);z.push_back(i3);
				v1=p[i1];v2=p[i2];v3=p[i3];
				p[i2]=v1;p[i3]=v2;p[i1]=v3;
				nI++;
				m++;
		  		
		  		
		  }
//		  for(j=1;j<=N;++j)
//		    cout<<p[j]<<" ";
//		    cout<<endl;
        if(!is_sorted(p.begin(),p.end()))
        {
            x.clear();
		y.clear();
		z.clear();
		p=p_;
		nI=0;
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
			if(p[p[j]]==j)
			{
			    j++;
			    
    			while(j<N && (p[j]==j || j==y[nI]))
    			{
    			    j++;
    			}
    // 			while(j>1 && (p[j]==j || j==y[nI]))
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
 		     //   if(j==p[p[j]] && j<N)
 		     //       j++;
 		        
 		    } 
 			 else if(p[x[nI]]!=x[nI])
 			 {
 			     j=i1;
 			     while(j<N && (p[j]==j ))
    			{
    			    j++;
    			}
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
		if(is_sorted(p.begin(),p.end()) && nI<=K)
		{
		    
			printf("%lld\n",nI);
			for(j=0;j<nI;++j)
			    printf("%lld %lld %lld\n",x[j],y[j],z[j]);
		}
		else
		{
    		printf("-1\n");
		}
	    
	//	cout<<"----end----"<<endl;	
// 		for(j=0;j<=N;++j)
// 			printf("%lld%  ",p[j]);
		//cout<<endl;
		x.clear();
		y.clear();
		z.clear();
		p.clear();
		p_.clear();B.clear();Fp.clear();O.clear();E.clear();
		
	}
	return 0;
}

