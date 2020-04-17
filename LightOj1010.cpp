// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
int main()
{
int t;
cin>>t;
for(int z=1;z<=t;z++)
{
	int a,b;
	cin>>a>>b;
	int sum=a*b;
	cout<<"Case "<<z<<": ";
	if(a==1 || b==1) cout<<max(a,b)<<endl;
	else if(a==2 || b==2)
	{
		int x=max(a,b);
		if(x%2==1) cout<<x+1<<endl;
		else{
			if(x%4==0) cout<<x<<endl;
			else cout<<x+2<<endl;
		} 
	 } 
	else {
	cout<<(sum+1)/2<<endl;
	}
	
}
End;
}


