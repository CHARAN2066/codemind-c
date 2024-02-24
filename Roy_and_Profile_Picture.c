#include<stdio.h>
int main()
{
    int a,b,t,l;
    scanf("%d",&l);
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<l||b<l)
        printf("UPLOAD ANOTHER
");
        else if((a>=l)&&(b>=l)&&(a!=b))
        printf("CROP IT
");
        else if((a>=l)&&(b>=l)&&(a==b))
         printf("ACCEPTED
");
    }
    return 0;
}