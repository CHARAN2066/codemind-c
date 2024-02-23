#include<stdio.h>
int sum(int n)
{
    int r,sum=0;
    while(n)
    {
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    //printf("%d
",sum(n));
    while(n>=10)
    n=sum(n);
    if(n==1||n==7)
    printf("True");
    else
    printf("False");
    return 0;
}