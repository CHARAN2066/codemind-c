#include<stdio.h>
int main()
{
    int n,d=0,e=0,o=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        d++;
        if(r%2==0)
        e++;
        else
        o++;
        n=n/10;
    }
    if(e==d)
    printf("Even");
    else if(o==d)
    printf("Odd");
    else
    printf("Mixed");
    return 0;
}