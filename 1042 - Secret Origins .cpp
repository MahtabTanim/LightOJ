#include <bits/stdc++.h>

using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  num[10001];

//52435 52435 52435 52435 52435 52435 7889 ans: 3783887

void fn(long long  n)
{
    if(n>5)
    {
        num[n]= (num[n-1] %10000007 + num[n-2]%10000007 +
        num[n-3]%10000007 + num[n-4]%10000007 + num[n-5]%10000007 + num[n-6]%10000007)%10000007;
    }
}
long long extra,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    cin>>t;
    while(t--)
    {   memset(num,-1,10001);
        cin>>a>>b>>c>>d>>e>>f>>n;
        num[0]=a,num[1]=b, num[2]=c, num[3]=d, num[4]=e ,num[5]=f;
        for(int i=6;i<=10000;i++) fn(i);
        cout<<"Case "<<++tcase<<": "<<num[n]%10000007<<endl;
    }
    return 0;
}
