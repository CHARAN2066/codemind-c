#include<stdio.h>
int pal(int n)
{
    int t=n,rev=0,r,ans;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    ans=1;
    else
    ans=0;
    return ans;
}
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;i<=10000+n;i++)
    {
        if(pal(i)==1&&prime(i)==2)
        {
        printf("%d",i);
        break;
        }
    }
    return 0;
}