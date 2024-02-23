#include<stdio.h>
#include<math.h>
int rev(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=pow(n,2);
    int r=rev(n);
    int s2=pow(r,2);
    if(s==rev(s2))
    printf("True");
    else
    printf("False");
    return 0;
}