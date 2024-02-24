#include<stdio.h>
#include<math.h>
int power(int n)
{
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        if(pow(2,i)==n)
        {
            ans=1;
            break;
        }
    }
    return ans;
}
int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    for(i=n,j=n;i<=n+100,j>=0;i++,j--)
    {
        if(power(j)==1)
        a=j;
        else if(power(i)==1)
        a=i;
        if(power(i)==1||power(j)==1)
        break;
    }
    printf("%d",abs(a-n));
    return 0;
}