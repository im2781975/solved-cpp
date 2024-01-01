#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1;
    int a[100];
    int n,k;
    while(cin>>n>>k)
    {
        l1=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int scr=a[k-1];
        for(int i=0; i<n; i++)
        {
            if(a[i]>=scr&&a[i]!=0)
            {
 
                l1=l1+1;
            }
        }
        cout<<l1<<endl;
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int fun(int n)
{
	int ans=0;
	while(n)
	{
		if(n%10==2) ans++;
		n/=10;
	}
	return ans;
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		ans+=fun(i); 
	}
	cout<<ans<<endl;
	return 0;
}          //   ans:624
*/
/*
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		for(int j=1;j<=2020;j++)
		{
			if(gcd(i,j)==1) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}    //     ans:2481215

#include<iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;
	
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,jg=0,yx=0;
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x; 
		if(x>=85) yx++,jg++;
		else if(x>=60&&x<85) jg++;
	}
	double j,y;
	j=jg/(n*1.0)*100;
	y=yx/(n*1.0)*100;
	//cout<<j<<endl<<y<<endl;
	j-int(j)>=0.5?jg=int(j)+1:jg=int(j);
	y-int(y)>=0.5?yx=int(y)+1:yx=int(y);
	cout<<jg<<"%"<<endl<<yx<<"%"<<endl;
	return 0;
}
�ܲ�ѵ�� 
#include<iostream>
using namespace std;


int main()
{
	int n=10000;
	int s=600/60;
	int t=0;
	while(n)
	{
		if(n-600<0)
		{
			t+=n/s;
			break;
		}
		n-=300;
		t+=120;
	}
	cout<<t<<endl;
	return 0;
}

#include<iostream>
using namespace std;

int year(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	return 366;
	return 365;
}

int main()
{
	int n=0;
	for(int i=1922;i<=2020;i++)
		n+=year(i);
	n-=22;
	cout<<n*24*60<<endl;
	return 0;
}

#include<iostream>
#include<stdio.h>
using namespace std;
int score[10001],ax=0,in=110,sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>score[i];
		ax=max(ax,score[i]);
		in=min(in,score[i]);
		sum+=score[i];
	}
	double ans=sum/(1.0*n);
	cout<<ax<<endl<<in<<endl;
	printf("%.2lf",ans);
	return 0;
}



#include<iostream>

using namespace std;

int main()
{
	int ans=0;
	int sum=0x3f3f3f3f;
	for(int i=1;i<=100;i++)
	{
		if(100%i==0)
		{
			if(100/i+i<sum)
			{
				sum=100/i+i;
				ans=i;
			}
		}
		else
		{
			if(100/i+i+1<sum)
			{
				sum=100/i+i+1;
				ans=i;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=0;i<2;i++)
	{
		ans+=4;
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<6;k++)
			ans+=5;
			ans+=7;
		}
		ans+=8;
	}
	ans+=9;
	cout<<ans<<endl;
	return 0;
}

403


#include<iostream>
using namespace std;


int main()
{
	itt n;
	cin>>n;
	while(n)
	{
		cout<<n<<' ';
		n/=2;
	}
	return 0;
}


#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(sqrt(x*x+y*y)==int(sqrt(x*x+y*y))) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}
*/ 
/*
#include<iostream>
using namespace std;

int main()
{
	
	return 0;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
int reverse(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x/=10;
	}
	return ans;
}

bool check(int x)
{
	if(x<=n) return false;
	int d=x%100;
	x/=100;
	int m=x%100;
	return m>0&&m<13&&d<=month[m];
}

int main()
{

	cin>>n;
	for(int i=n/10000;i<=9999;i++)
	{
		int x=i*10000+reverse(i);
		if(check(x)) 
		{
			cout<<x<<endl;
			break;
		}
	}
	for(int i=n/1000000;i<=9999;i++)
	{
		int x=i*1000000+i*10000+reverse(i)*100+reverse(i);
		if(check(x))
		{
			cout<<x<<endl;
			break; 
		}
	}
	return 0;
}
*
#include<bits/stdc++.h>
using namespace std;

int n;
int m[4]={0};
int a,b,g;
// 123 213 231 132
int p[4]={0,1,2,3};
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>g;
		swap(p[a],p[b]);
		m[p[g]]++;
	}
	int max_n=0;
	int max_index=0;
	for(int i=1;i<4;i++)
	{
		if(m[i]>max_n)
		{
			max_n=m[i];
			max_index=i;
		}
	}
	cout<<max_index<<endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}



#include<string.h>
#include<stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i])) 
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ���������� 
 
#include<bits/stdc++.h>
using namespace std;
const int N = 510,INF=1e9;

int f[N][N];
int a[N][N];
int n;

int main()
{
    cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	f[i][j]=-INF;
	f[1][1]=a[1][1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=max(f[i-1][j-1]+a[i][j],f[i-1][j]+a[i][j]);
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++) ans=max(ans,f[n][i]);
	cout<<ans<<endl;
    return 0;
}



���ű�ʮһ��
 
#include<bits/stdc++.h>
using namespace std;

const int N = 510,INF=1e9;

int f[N][N];
int m[N][N];

int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cin>>f[i][j];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			//f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		    if(f[i-1][j-1]>f[i-1][j])
		    {
		    	f[i][j]+=f[i-1][j-1];
		    	m[i][j]=m[i-1][j-1]+1;
		    }
		    else
		    {
		    	f[i][j]+=f[i-1][j];
		    	m[i][j]=m[i-1][j]-1;
		    }
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++)
	{
		if(abs(m[n][i])<=1&&f[n][i]>ans) ans=f[n][i];
	}
	cout<<ans<<endl;
}


*/
/**************************************

#include<bits/stdc++.h>
using namespace std;
const int N = 



int main()
{
	
	return 0;
} 

******************************************


#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int a[N],b[N];
int n,m;

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int l=0,r=0,ans=0;
	while(l<n&&r<m)
	{
		if(a[l]==b[r]) 
		{
			l++;
			r++;
			ans++;
		}
		else if(a[l]>b[r])
		{
			r++;
			b[r]+=b[r-1];
		}
		else
		{
			l++;
			a[l]+=a[l-1];
		}
	}
	cout<<ans<<endl;
	return 0;
}



#include<bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0') 
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);
	
	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		} 
	}
	cout<<ans<<endl;
	return 0;
} 




#include<bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021; 
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1) 
		{
			break;
		} 
	}	
	cout<<ans-1<<endl;
	return 0;
}




#include<bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N; 
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*

#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
} 


#include<iostream>
#include<string> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";
		
		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;

bool is_prime(int x)
{
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	int x,y;
	while(cin>>x>>y,x+y)
	{
		bool f=true;
		for(int i=x;i<=y;i++)
		{
			if(!is_prime(i*i+i+41))
			{
				f=false;
				cout<<"Sorry"<<endl;
				break;
			} 
		}
		if(f) cout<<"OK"<<endl;
	}
	return 0;
}


``````````````````````
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````



#include<bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	} 
	cout<<ans<<endl;
	return 0;
}
20312088


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w;
	cin>>w;
	for(int i=2;i<w;i+=2)
	{
		if((w-i)%2==0) 
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}


#include<iostream>
using namespace std;
const int N = 1010;
 
int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	} 
	cout<<f[n][t];
	return 0;
} 
*
#include<iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn 
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		
		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++) 
		{
			if(s[i]<0) ans++; 
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include<iostream>
#include<string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}	
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;		
	}
	return 0;
}
*
#include<iostream>
#include<stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;
		
	}
	
	return 0;
}
*

#include<iostream>
#include<stdio.h> 
#include<cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A'; 
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';	
		}
		cout<<s<<endl;
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			} 
		}
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else 
				{
					cout<<"no"<<endl;
					break;
				}	
				if(c+1==l) 
				{
					cout<<"yes"<<endl;
				}
			}			
		}
		else cout<<"no"<<endl;
	}
	return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;

int n;

int main()
{	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp; 
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
} 


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
} 



#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				} 
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	} 
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;
	
	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;	
	sort(edges,edges+m);
	
	
	
	return 0;
}
*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}

################   64λ�����˷�
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;
	
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}
*

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i]; 
		}
		cout<<endl;
	}
	return 0;
} 
*
#include<iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include<iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> res; 
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include<iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*
#include<iostream>

using namespace std;

int n;
int a,b;
int is_ans(int x)
{
	int ans=1;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			ans+=i;
			ans+=x/i;
		}
	} 
	return ans;
}
int main()
{
	//cout<<is_ans(200);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(is_ans(a)==b&&is_ans(b)==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0; 
}
*

#include<iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl; 
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<sstream>
#include<string>
#include<set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
} 
*

#include<iostream>
#include<string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring> 
#include<iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn) 
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
} 


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include<iostream>
#include<stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0) 
	{
		f=0;
		n=-n;
	}
	string ans=""; 
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*

#include<iostream>

using namespace std;

int a,b,c,d,e,f;
int n;
int main()
{	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		c+=f;
		if(c>=60) 
		{
			b+=c/60;
			c=c%60;
		} 
		//cout<<b<<" "<<c<<endl;
		b+=e;
		if(b>=60)
		{
			a+=b/60; 
			b%=60;
		}
		cout<<a+d<<" "<<b<<" "<<c<<endl; 
	}
	return 0;
}
*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int n,k;
double a[101];
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}	
		sort(a,a+k);
		printf("%.2lf\n",a[k-1]);
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n<=1) return n; 
	ll a=0,b=1;
	for(int i=1;i<n;i++)
	{
		ll c=a+b;
		a=b;
		b=c;
	}
	return b;
} 

int main()
{
	int n;
	while(scanf("%d",&n),n!=-1)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}

*

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*
#include<iostream>

using namespace std;

int a,b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
	return 0; 
} 
*
#include<iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4) 
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6) 
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}	
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}	
	return 0;
} 

*

#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
} 
*
#include<iostream>

using namespace std;
int t;
int a,b;

int solve(int a,int b)
{
	a=a%100;
	b=b%100;
	a+=b;
	return a%100; 
}

int main(){
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		cout<<solve(a,b)<<endl;
	}
	return 0;
}


#include<iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m) 
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team
#include<iostream>

using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
} 

