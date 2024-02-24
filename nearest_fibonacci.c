#include<stdio.h>
int fab(int n)
{
    int a=0,b=1,ans=0,c;
    for(int i=0;i<=100;i++)
    {
        c=a+b;
        if(c==n)
        {
            ans=1;
            break;
        }
        else
        {
            a=b;
            b=c;
        }
    }
 return ans;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n,j=n;i<=n+100,j>=0;i++,j--)
    {
        if(fab(j)==1)
        printf("%d ",j);
        if(fab(i)==1)
        printf("%d ",i);
        if(fab(i)==1||fab(j)==1)
        break;
    }
    return 0;
}