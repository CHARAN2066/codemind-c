#include<stdio.h>
int pal(int n)
{
    int r,rev=0,ans;
    int temp=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    ans=1;
    else
    ans=2;
    return ans;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n+1,j=n-1;i<=n+100,j>=0;i++,j--)
    {
        if(pal(j)==1)
        {
        printf("%d ",j);
        }
        if(pal(i)==1)
        {
        printf("%d ",i);
        }
        if(pal(i)==1||pal(j)==1)
        break;
    }
    return 0;
}