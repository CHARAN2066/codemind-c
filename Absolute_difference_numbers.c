#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,r,d=0;
    scanf("%d %d",&n,&x);
    int t=n;
    while(n)
    {
        r=n%10;
        d++;
        n=n/10;
    }
    int a=pow(10,x);
    int num1=t%a;
    int num2=t/(pow(10,d-x));
    int ans=abs(num1-num2);
    printf("%d",ans);
}