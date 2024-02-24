#include<stdio.h>
#include<math.h>
int power(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        ans++;
    }
    return ans;
}
int main()
{
    int i,n1,n2,a,flag=0;
    scanf("%d %d",&n1,&n2);
    int n=n1+n2;
    if(power(n)==2)
    {
    n=n+1;
    flag=1;
    }
    for(i=n;i<=n+100;i++)
    {
        if(power(i)==2)
        {
        a=i;
        break;
        }
    }
    if(flag==0)
    printf("%d",abs(n-a));
    else
    printf("%d",abs(n-a)+1);
    return 0;
}