#include<bits/stdc++.h>
using namespace std;

int low(int A[], int n, int q)
{
    int lo=0,hi=n-1,mid,index=-1;
    if(q<=A[0])
        return 0;

    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(A[mid]==q)
        {
            index=mid;
            hi=mid-1;
        }
        else if(A[mid]< q)
        {
            lo=mid+1;
        }
        else
        {
            index=mid;
            hi=mid-1;
        }
    }
    return index;
}

int high(int A[], int n, int q)
{
    int lo=0,hi=n-1,mid,index;
    if(q>=A[n-1])
        return n-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(A[mid]==q)
        {
            index=mid;
            lo=mid+1;
        }
        else if(A[mid]< q)
        {
            index=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    return index;
}

int main()
{
    int t,tcase=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int A[n];
        for(int i=0; i<n; i++)
            scanf("%d",&A[i]);
        printf("Case %d:\n",++tcase);
        while(q--)
        {
            int l,r;
            scanf("%d %d",&l,&r);
            if(l>r)
                swap(l,r);
            l=low(A,n,l);
            r=high(A,n,r);
            if(l==-1)
                printf("%d\n",0);
            else
                printf("%d\n",r-l+1);
        }

    }
    return 0;
}
