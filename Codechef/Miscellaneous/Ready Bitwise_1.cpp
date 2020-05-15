#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Probs
{
	public:
		float P0,P1,Pa,PA;
	Probs()
	{
		P0=0.25;
		P1=0.25;
		Pa=0.25;
		PA=0.25;
	}
};
ll ModInv(ll n)
{
	ll ans=748683265;
	if(n>1)
		ans=(ans*(ModInv(n-1)%998244353))%998244353;
	return ans;
}
int main()
{
	ll a,b,c,N,T,i,j,P[4],Q[4],MI,k,ans,lz;
	float P0,P1,Pa,PA,p1,pa,pA,p0,PC[4]={0.25,0.25,0.25,0.25};
	vector<char> A;
	vector<char> B;
	vector<string> C,D;
	vector<vector<long double> > E;
	vector<long double> F;
	vector<ll> Fl;
	F.push_back(0.25);F.push_back(0.25);F.push_back(0.25);F.push_back(0.25);
	Fl.push_back(0.25);Fl.push_back(0.25);Fl.push_back(0.25);Fl.push_back(0.25);
	string s;
	cin>>T;
	for(i=0;i<T;++i)
	{
		MI=0;
		P0=0.25;P1=0.25;Pa=0.25;PA=0.25;
		cin>>s;
		A.push_back('(');
		j=0;
		while(A.size()!=0 && j<s.length())
		{
			if(s[j]=='(')
				A.push_back('(');
			else if(s[j]=='#')
				B.push_back('#');
			else if(s[j]==')')
			{
				a=A.size()-1;
				while(A[a]!='(')
				{
					B.push_back(A[a]);
					A.pop_back();
					a--;
				}
				A.pop_back();
			}
			else
			{
				a=A.size()-1;
				while(A[a]!='(')
				{
					B.push_back(A[a]);
					A.pop_back();
					a--;
				}
				A.push_back(s[j]);
			}
			j++;
		}
		A.clear();
		a=1;MI=0;
//		for(j=0;j<B.size();++j)
//		{
//			if(B[j]=='#')
//				C.push_back("0.25");
//			else
//				C.push_back(B[j]);
//		}
//		B.clear();
		a=1;MI=0;
		for(j=0;j<B.size();++j)
		{
			lz=E.size()-1;
			if(B[j]=='#')
			{
				F[0]=1;F[1]=1;F[2]=1;F[3]=1;
				E.push_back(F);
				a=(a*4)%998244353;
				MI++;
				
			}
			else
			{
			    
    			if(B[j]=='&')
    			{
    				F[0]=(E[lz-1][0]+E[lz-1][1]+E[lz-1][2]+E[lz-1][3])*E[lz][0]+(E[lz][0]+E[lz][1]+E[lz][2]+E[lz][3])*(E[lz-1][0])-(E[lz][0]*E[lz-1][0])+(E[lz][2]*E[lz-1][3])+(E[lz][3]*E[lz-1][2]);
                F[1]=E[lz][1]*E[lz-1][1];
                
                F[2]=(E[lz][2]*E[lz-1][1])+(E[lz][1]*E[lz-1][2])+(E[lz][2]*E[lz-1][2]);
                
                F[3]=(E[lz][3]*E[lz-1][1])+(E[lz][1]*E[lz-1][3])+(E[lz][3]*E[lz-1][3]);
    			
    				
    			}
    			else if(B[j]=='|')
    			{
    				F[0]=E[lz][0]*E[lz-1][0];
                F[1]=(E[lz-1][1]+E[lz-1][0]+E[lz-1][2]+E[lz-1][3])*E[lz][1]+(E[lz][1]+E[lz][0]+E[lz][2]+E[lz][3])*(E[lz-1][1])-(E[lz][1]*E[lz-1][1])+(E[lz][2]*E[lz-1][3])+(E[lz][3]*E[lz-1][2]);
                F[2]=(E[lz][2]*E[lz-1][0])+(E[lz][0]*E[lz-1][2])+(E[lz][2]*E[lz-1][2]);
                F[3]=(E[lz][3]*E[lz-1][0])+(E[lz][0]*E[lz-1][3])+(E[lz][3]*E[lz-1][3]);
    			
    			}
    			else if(B[j]=='^')
    			{
    				F[0]=(E[lz][0]*E[lz-1][0])+(E[lz][1]*E[lz-1][1])+(E[lz][2]*E[lz-1][2])+(E[lz][3]*E[lz-1][3]);
                F[1]=(E[lz][0]*E[lz-1][1])+(E[lz][1]*E[lz-1][0])+(E[lz][2]*E[lz-1][3])+(E[lz][3]*E[lz-1][2]);
                F[2]=(E[lz][0]*E[lz-1][2])+(E[lz][1]*E[lz-1][3])+(E[lz][2]*E[lz-1][0])+(E[lz][3]*E[lz-1][1]);
                F[3]=(E[lz][0]*E[lz-1][3])+(E[lz][1]*E[lz-1][2])+(E[lz][2]*E[lz-1][1])+(E[lz][3]*E[lz-1][0]);
    			}
    // 			Fl[0]=(F[0]*16)%998244353;
				// Fl[1]=(F[1]*16)%998244353;
				// Fl[2]=(F[2]*16)%998244353;
				// Fl[3]=(F[3]*16)%998244353;
				for(k=0;k<4;++k)
				{
				    Fl[k]=F[k];
				    Fl[k]=Fl[k]%998244353;
				    F[k]=Fl[k];
				}
				E.pop_back();
				E.pop_back();
				E.push_back(F);
			}
		}
		
//		for(j=0;j<B.size();++j)
//		{
//			if(B[j]!='#')
//			{
//				p0=P0;p1=P1;pa=Pa;pA=PA;
//				if(B[j]=='&')
//				{
//					P0=(P0)+(PC[0])-(P0*PC[0])+(Pa*PC[3])+(PA*PC[2]);
//					Pa=(pa*PC[1])+(p1*PC[2])+(pa*PC[2]);
//					PA=(pA*PC[1])+(p1*PC[3])+(pA*PC[3]);
//					P1=p1*PC[1];
//					
//				}
//				else if(B[j]=='|')
//				{
//					
//					P1=(P1)+(PC[1])-(P1*PC[1])+(Pa*PC[3])+(PA*PC[2]);
//					Pa=(pa*PC[0])+(p0*PC[2])+(pa*PC[2]);
//					PA=(pA*PC[0])+(p0*PC[3])+(pA*PC[3]);
//					P0=p0*PC[0];
//				}
//				else
//				{
//				    
//					P0=(p0*PC[0])+(p1*PC[1])+(pa*PC[2])+(pA*PC[3]);
//					P1=(p0*PC[1])+(p1*PC[0])+(pa*PC[3])+(pA*PC[2]);
//					Pa=(p0*PC[2])+(p1*PC[3])+(pa*PC[0])+(pA*PC[1]);
//					PA=(p0*PC[3])+(p1*PC[2])+(pa*PC[1])+(pA*PC[0]);
//				}
//			}
//			else
//			{
//				a*=4;
//				MI++;
//			}
//		}
		for(j=0;j<4;++j)
		{
		    
			P[j]=E[0][j];
			Q[j]=a;
		}
		    
		//P[0]=P0*a;P[1]=P1*a;P[2]=Pa*a;P[3]=PA*a;
		
		for(j=0;j<4;++j)
		{
		    //cout<<P[j]<<"/"<<Q[j]<<" ";
		    ans=(P[j]*ModInv(MI))%998244353;
		    cout<<ans<<" ";//<<ModInv(MI);
		}
		cout<<endl;
		B.clear();
		for(j=0;j<E.size();++j)
		    E[j].clear();
		E.clear();
		F.clear();
		Fl.clear();
		for(j=0;j<4;++j)
		{
		    F.push_back(1);
		    Fl.push_back(1);
		}
// 		F.push_back(1);F.push_back(1);F.push_back(1);F.push_back(1);
	}
	return 0;
}


