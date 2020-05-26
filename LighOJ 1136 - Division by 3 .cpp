#include <bits/stdc++.h>
using namespace std;
long long su(long long A)
{
    return (A*(A+1))/2;
}
int main()
{
    int t,tcase=0;
    scanf("%d",&t);
    while(t--)
    {
        long long count=0,sum,A,B;
        scanf("%lld %lld",&A,&B);
        while(su(A)%3==0 && A<=B)
        {
            count++;
            A++;
        }
        if(A>B) A=B;
        long long dif=fabs(B-A);
        count+=(dif/3)*2;
        count+=dif%3;
        printf("Case %d: %lld\n",++tcase,count);
    }
    return 0;
}
