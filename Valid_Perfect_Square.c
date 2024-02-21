#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int ans;
    float a=sqrt(n);
    if(ceil(a)==floor(a))
    ans=1;
    else
    ans=0;
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(fun(a)==1)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}