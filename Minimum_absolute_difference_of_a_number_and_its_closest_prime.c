#include<stdio.h>
#include<math.h>
int prime(int n)
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
    int i,j,n,a;
    scanf("%d",&n);
    for(i=n,j=n;i<=n+100,j>=0;i++,j--)
    {
        if(prime(j)==2)
        a=j;
        else if(prime(i)==2)
        a=i;
        if(prime(i)==2||prime(j)==2)
        break;
    }
    printf("%d",abs(a-n));
    return 0;
}